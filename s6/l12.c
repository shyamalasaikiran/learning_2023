#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student {
    int rollno;
    char name[20];
    float marks;
};

void parseStringToStruct(const char* inputString, struct Student* student) {
    const char* delimiter = " ";
    char* inputCopy = strdup(inputString); 
    char* token = strtok(inputCopy, delimiter);

    if (token == NULL) {
        free(inputCopy);  
        return;
void initializeArray(struct Student *students, int size) {
    for (int i = 0; i < size; i++) {
        printf("Enter roll no for student %d: ", i + 1);
        scanf("%d", &(students[i].rollno));
        printf("Enter name for student %d: ", i + 1);
        scanf("%s", students[i].name);
        printf("Enter marks for student %d: ", i + 1);
        scanf("%f", &(students[i].marks));
    }

    student->rollno = atoi(token);
    token = strtok(NULL, delimiter);

    if (token == NULL) {
        free(inputCopy);
        return;
    }

    strncpy(student->name, token, sizeof(student->name) - 1);
    student->name[sizeof(student->name) - 1] = '\0';
    token = strtok(NULL, delimiter);

    if (token == NULL) {
        free(inputCopy);
        return;
    }

    student->marks = atof(token);
    free(inputCopy);  
}

void initializeStruct(struct Student* student) {
    student->rollno = 0;
    strcpy(student->name, "");
    student->marks = 0.0;
}

int main() {
    const char* inputString = "1001 Aron 100.00";

    struct Student* student = (struct Student*)malloc(sizeof(struct Student));

    if (student == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    int size;
    printf("Enter the number of students: ");
    scanf("%d", &size);
    struct Student *students = (struct Student *)malloc(size * sizeof(struct Student));
    initializeArray(students, size);
    for (int i = 0; i < size; i++) {
        printf("Roll No: %d, Name: %s, Marks: %.2f\n", students[i].rollno, students[i].name, students[i].marks);
    }

    initializeStruct(student);
    parseStringToStruct(inputString, student);

    printf("Roll No: %d\n", student->rollno);
    printf("Name: %s\n", student->name);
    printf("Marks: %.2f\n", student->marks);

    free(student);
    free(students); 
    return 0;
}