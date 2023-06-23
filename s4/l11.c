#include <stdio.h>
#include <ctype.h>

void toggleCase(char* str) {
    int i = 0;

    while (str[i] != '\0') {
        if (islower(str[i]))
            str[i] = toupper(str[i]);
        else if (isupper(str[i]))
            str[i] = tolower(str[i]);

        i++;
    }
}

int main() {
    char str1[] = "Hello, World!";
    char str2[] = "A+B";
    char str3[] = "Prog4u";

    printf("Original string: %s\n", str1);
    printf("Original string: %s\n", str2);
    printf("Original string: %s\n", str3);

    toggleCase(str1);
    toggleCase(str2);
    toggleCase(str3);

    printf("Toggled case string: %s\n", str1);
    printf("Toggled case string: %s\n", str2);
    printf("Toggled case string: %s\n", str3);

    return 0;
}