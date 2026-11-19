#ifndef STUDENT_H
#define STUDENT_H

#define MAX 100

struct Student {
    int roll_no;
    char name[50];
    float marks;
};

extern struct Student students[MAX];
extern int count;

void addStudent();
void displayStudents();
void searchStudent();
void averageMarks();

#endif