#include <stdio.h>

struct Student {
    int rollNo;
    char name[20];
};

int main() {
    struct Student student = {1, "John"};
    struct Student *ptr = &student;

    printf("Student Name: %s\n", ptr->name);
    printf("Student Roll No: %d\n", ptr->rollNo);

    return 0;
}
