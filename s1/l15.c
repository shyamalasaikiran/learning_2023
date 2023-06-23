#include <stdio.h>

int bit_operations(int num, int oper_type) {
    switch (oper_type) {
        case 1:
            // Set 1st bit
            num |= 1;
            break;
        case 2:
            // Clear 31st bit
            num &= ~(1 << 31);
            break;
        case 3:
            // Toggle 16th bit
            num ^= (1 << 16);
            break;
        default:
            printf("Invalid operation type.\n");
            return -1;
    }

    return num;
}

int main() {
    int num, oper_type, result;

    printf("Enter a 32-bit integer: ");
    scanf("%d", &num);

    printf("Enter operation type (1, 2, or 3): ");
    scanf("%d", &oper_type);

    result = bit_operations(num, oper_type);

    if (result != -1) {
        printf("Result: %d\n", result);
    }

    return 0;
}
