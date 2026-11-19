#include <stdio.h>
#include "student.h"

void averageMarks() {
    int i;
    float total = 0;

    if (count == 0) {
        printf("No student records available!\n");
        return;
    }

    for (i = 0; i < count; i++) {
        total += students[i].marks;
    }

    printf("Average Marks = %.2f\n",
           total / count);
}