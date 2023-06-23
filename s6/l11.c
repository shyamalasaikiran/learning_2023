#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student {
    int rollno;
    char name[20];
    float marks;
};

void parseAndInitializeStructures(char* input, int size, struct Student* students) {
    char* token;
    int i = 0;
    token = strtok(input, " ");

    while (token != NULL && i < size) {
        students[i].rollno = atoi(token);
        token = strtok(NULL, " ");
        if (token != NULL) {
            strncpy(students[i].name, token, sizeof(students[i].name) - 1);
            token = strtok(NULL, " ");
            if (token != NULL) {
                students[i].marks = atof(token);
                token = strtok(NULL, " ");
            }
void parseString(const char *input, struct Student *students, int size) {
    char *token;
    char *copy = strdup(input); 
    int count = 0;
    token = strtok(copy, " ");
    while (token != NULL) {
        switch (count) {
            case 0:
                students[size].rollno = atoi(token);
                break;
            case 1:
                strcpy(students[size].name, token);
                break;
            case 2:
                students[size].marks = atof(token);
                break;
        }

        i++;
        token = strtok(NULL, " ");
        count++;
    }
    free(copy); 
}

int main() {
    int size;
    char input[100];

    printf("Enter the number of structures to create: ");
    printf("Enter the number of inputs: ");
    scanf("%d", &size);
    while (getchar() != '\n');
    printf("Enter the input string: ");
    fgets(input, sizeof(input), stdin);
    input[strcspn(input, "\n")] = '\0';
    struct Student* students = malloc(size * sizeof(struct Student));
    parseAndInitializeStructures(input, size, students);
    struct Student *students = (struct Student *)malloc(size * sizeof(struct Student));
    for (int i = 0; i < size; i++) {
        char input[100];
        printf("Enter input %d: ", i + 1);
        scanf(" %[^\n]s", input);
        parseString(input, students, i);
    }
    for (int i = 0; i < size; i++) {
        printf("Structure %d:\n", i + 1);
        printf("Roll No: %d\n", students[i].rollno);
        printf("Name: %s\n", students[i].name);
        printf("Marks: %.2f\n\n", students[i].marks);
        printf("Roll No: %d, Name: %s, Marks: %.2f\n", students[i].rollno, students[i].name, students[i].marks);
    }
    free(students);

    free(students);  
    return 0;
}