#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student {
    int rollno;
    char name[20];
    float marks;
};

void parseStringToStruct(const char* inputString, struct Student* students, int size) {
    const char* delimiter = " ";
    char* inputCopy = strdup(inputString);
    char* token = strtok(inputCopy, delimiter);

    for (int i = 0; i < size; ++i) {
        if (token == NULL)
            break;

        students[i].rollno = atoi(token);
        token = strtok(NULL, delimiter);

        if (token == NULL)
            break;

        strncpy(students[i].name, token, sizeof(students[i].name) - 1);
        students[i].name[sizeof(students[i].name) - 1] = '\0';
        token = strtok(NULL, delimiter);

        if (token == NULL)
            break;

        students[i].marks = atof(token);
        token = strtok(NULL, delimiter);
void displayStudents(const struct Student *students, int size) {
    printf("Roll No\tName\tMarks\n");
    printf("----------------------------\n");
    for (int i = 0; i < size; i++) {
        printf("%d\t%s\t%.2f\n", students[i].rollno, students[i].name, students[i].marks);
    }

    free(inputCopy); 
}

void displayStructArray(const struct Student* students, int size) {
    for (int i = 0; i < size; ++i) {
        printf("Student %d:\n", i + 1);
        printf("Roll No: %d\n", students[i].rollno);
        printf("Name: %s\n", students[i].name);
        printf("Marks: %.2f\n", students[i].marks);
        printf("\n");
    }
}

int main() {
    const char* inputString = "1001 Aron 100.00";
    int size = 1; 

    struct Student* students = (struct Student*)malloc(size * sizeof(struct Student));

    if (students == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    parseStringToStruct(inputString, students, size);

    displayStructArray(students, size);

    free(students);
    struct Student students[] = {
        {1001, "Aron", 100.00},
        {1002, "John", 95.50},
        {1003, "Emma", 98.75}
    };
    int size = sizeof(students) / sizeof(students[0]);
    displayStudents(students, size);
    return 0;
}