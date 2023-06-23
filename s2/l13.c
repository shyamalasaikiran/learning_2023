#include <stdio.h>

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int length = sizeof(arr) / sizeof(arr[0]);
    int first_sum = 0, second_sum=0, third_sum=0;

    for (int i = 0; i < length; i += 2) {
        first_sum += arr[i];
    }
    printf("Sum of alternate elements: %d\n", first_sum);

    for (int j = 1; j < length; j += 2) {
        second_sum += arr[j];
    }
    printf("Sum of alternate elements: %d\n", second_sum);

    for (int k = 2; k < length; k += 2) {
        third_sum += arr[k];
    }
    printf("Sum of alternate elements: %d\n", third_sum);

    return 0;
}