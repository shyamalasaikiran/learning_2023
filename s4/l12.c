#include <stdio.h>
int stringToInteger(const char* str) {
    int res = 0;
    int i = 0;

    while (str[i] != '\0') {
        int ival = str[i] - '0';
        res = res * 10 + ival;
        i++;
    }

    return res;
}
int main() {
    const char str[] = "5278";
    int value = stringToInteger(str);

    printf("Input String: %s\n", str);
    printf("Converted Integer: %d\n", value);

    return 0;
}