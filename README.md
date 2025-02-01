## Student Management System

This is a **C program** for a **menu-driven student management system**. The program allows 
users to perform various operations on student data, such as adding new students, searching 
for students by roll number or name, updating student details, and deleting student records.

## Features

- **Add Student Details**: Adds new student details like first name, last name, roll and courses.
- **Find Student by Roll Number**: Allows the user to search for a student using their roll number.
- **Find Student by First Name**: Allows the user to search for a student using their first name.
- **Find Students by Course ID**: Allows the user to search for students enrolled in a particular course.
- **Total Students**: Displays the total number of students enrolled.
- **Delete Student**: Deletes a student's record based on their roll number.
- **Update Student Details**: Updates the student's information like name, roll number, CGPA, or courses.

## Structure

The program uses a `struct` to store student details. The `sinfo` structure stores the following data:

- `fname`: First name of the student.
- `lname`: Last name of the student.
- `roll`: Roll number of the student.
- `cgpa`: CGPA of the student.
- `cid`: Array to store the IDs of courses the student is enrolled in.

The `i` variable keeps track of the number of students currently stored.

## Functions

### 1. `add_student()`
   Adds a new student to the list with the provided details.

### 2. `find_rl()`
   Searches for a student by roll number.

### 3. `find_fn()`
   Searches for a student by first name.

### 4. `find_c()`
   Searches for students enrolled in a specific course by course ID.

### 5. `tot_s()`
   Displays the total number of students enrolled.

### 6. `del_s()`
   Deletes a student by roll number.

### 7. `up_s()`
   Updates a student's details such as name, roll number, CGPA, and courses.

## Compilation and Execution

### Compile the Program

To compile the program, use the following command:

```bash
gcc student_management_system.c -o student_management_system

