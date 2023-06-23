#include <stdio.h>

void printExponent(double x) {
    unsigned long long* ptr = (unsigned long long*)&x;
    unsigned long long exponent = (*ptr & 0x7FF0000000000000) >> 52;
    unsigned int hexExponent = exponent & 0x7FF;

    printf("Hexadecimal: 0x%llX\n", hexExponent);

    unsigned int binaryExponent = 0;
    for (int i = 10; i >= 0; i--) {
        binaryExponent |= ((hexExponent >> i) & 1) << i;
    }

    printf("Binary: 0b");
    for (int i = 10; i >= 0; i--) {
        printf("%d", (binaryExponent >> i) & 1);
    }

    printf("\n");
}

int main() {
    double x = 0.7;
    printExponent(x);

    return 0;
}
