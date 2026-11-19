#include <stdio.h>
#include "student.h"

void searchStudent() {
    int roll, i, found = 0;

    printf("Enter Roll Number to Search: ");
    scanf("%d", &roll);

    for (i = 0; i < count; i++) {
        if (students[i].roll_no == roll) {
            printf("\nStudent Found!\n");
            printf("Roll Number: %d\n",
                   students[i].roll_no);
            printf("Name: %s\n",
                   students[i].name);
            printf("Marks: %.2f\n",
                   students[i].marks);

            found = 1;
            break;
        }
    }

    if (!found) {
        printf("Student not found!\n");
    }
}