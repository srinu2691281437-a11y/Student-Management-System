#include <stdio.h>
#include "student.h"

void addStudent() {
    if (count >= MAX) {
        printf("Student list is full!\n");
        return;
    }

    printf("Enter Roll Number: ");
    scanf("%d", &students[count].roll_no);

    printf("Enter Name: ");
    scanf("%49s", students[count].name);

    printf("Enter Marks: ");
    scanf("%f", &students[count].marks);

    count++;

    printf("Student added successfully!\n");
}
