#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

struct Student {
    int rollno;
    char name[20];
    float marks;
};

int searchByName(const struct Student* students, int size, const char* name) {
void searchByName(const struct Student *students, int size, const char *name) {
    int found = 0;
    for (int i = 0; i < size; i++) {
        if (strcmp(students[i].name, name) == 0) {
            return i;
            printf("Student Found:\n");
            printf("Roll No: %d, Name: %s, Marks: %.2f\n", students[i].rollno, students[i].name, students[i].marks);
            found = 1;
        }
    }
    return -1;  
    if (!found) {
        printf("Student with name '%s' not found.\n", name);
    }
}

int main() {
    struct Student students[] = {
        {1001, "John", 85.5},
        {1002, "Alice", 92.3},
        {1003, "Bob", 78.9},
        {1004, "Sarah", 95.2}
    };
    int size = sizeof(students) / sizeof(students[0]);

    int size;
    printf("Enter the number of students: ");
    scanf("%d", &size);
    struct Student *students = (struct Student *)malloc(size * sizeof(struct Student));
    for (int i = 0; i < size; i++) {
        printf("Enter details for student %d:\n", i + 1);
        printf("Roll No: ");
        scanf("%d", &students[i].rollno);
        printf("Name: ");
        scanf("%s", students[i].name);
        printf("Marks: ");
        scanf("%f", &students[i].marks);
    }
    char searchName[20];
    printf("Enter the name to search: ");
    printf("\nEnter the name to search for: ");
    scanf("%s", searchName);

    int index = searchByName(students, size, searchName);

    if (index != -1) {
        printf("Student found at index %d:\n", index);
        printf("Roll No: %d, Name: %s, Marks: %.2f\n", students[index].rollno, students[index].name, students[index].marks);
    } else {
        printf("Student not found.\n");
    }

    searchByName(students, size, searchName);
    free(students);
    return 0;
}