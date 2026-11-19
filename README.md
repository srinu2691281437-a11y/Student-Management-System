# 🎓 Student Management System

A collaborative, menu-driven **Student Management System** developed in **C** using **Git** and **GitHub** by a team of four developers. This console-based application allows users to efficiently manage student records, calculate academic averages, and search through stored data.

---

## 🚀 Features

* **Add Student (`add_student.c`):** Input and store new student details (such as ID/Roll Number, Name, and Marks).
* **Display Students (`display_student.c`):** View a formatted list of all currently registered students.
* **Search Student (`search_student.c`):** Quickly look up a specific student's record by their ID or name.
* **Average Marks (`average_marks.c`):** Automatically calculate and display average marks across students/subjects.
* **Modular Architecture (`student.h` & `main.c`):** Clean separation of declarations and feature implementations for easy team collaboration.

---

## 📂 Project Structure

```text
Student-Management-System/
├── main.c               # Main entry point and menu interface
├── student.h            # Header file containing structs and function prototypes
├── add_student.c        # Implementation for adding new student records
├── display_student.c    # Implementation for displaying all records
├── search_student.c     # Implementation for searching specific students
├── average_marks.c      # Implementation for calculating average marks
└── README.md            # Project documentation
