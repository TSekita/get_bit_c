#include <stdio.h>
#include <stdint.h>

int get_bit(uint8_t val, int bit) {
    int result;
    result = (val >> bit - 1 ) & 1;
    return result;
}

void print_binary(uint8_t val) {
    for (int i = 7; i >= 0; i-- ) {
        printf("%d", (val >> i) & 1);
    }
}

int main(void) {
    uint8_t val = 170;
    print_binary(val);
    printf("\n");
    for (int i = 8; i > 0; i--) {
        printf("%d\n", get_bit(val, i));
    }
    return 0;
}
