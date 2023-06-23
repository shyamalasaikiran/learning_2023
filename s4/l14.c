#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str[] = { 'A','b','c','d',' ','X','Y','Z','\0'};
    int size = sizeof(str) / sizeof(str[0]);

    printf("Original String: %s\n", str);

    for (int i = 0; i < size; i++) {
        if (islower(str[i])) {
            str[i] = toupper(str[i]);
        } else if (isupper(str[i])) {
            str[i] = tolower(str[i]);
        }
    }

    printf("Toggle String is : %s\n", str);

    return 0;
}