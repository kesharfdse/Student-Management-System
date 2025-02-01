#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Variable to keep track of the number of students
int i = 0;

// Structure to store the student details
struct sinfo {
    char fname[50];
    char lname[50];
    int roll;
    float cgpa;
    int cid[10];  // Array to store course IDs
} st[55];

void add_student() {
    printf("Add the Student Details\n");
    printf("-------------------------\n");
    printf("Enter the first name of student: ");
    scanf("%s", st[i].fname);
    printf("Enter the last name of student: ");
    scanf("%s", st[i].lname);
    printf("Enter the Roll Number: ");
    scanf("%d", &st[i].roll);
    printf("Enter the CGPA you obtained: ");
    scanf("%f", &st[i].cgpa);
    printf("Enter the course IDs (5 courses): ");
    for (int j = 0; j < 5; j++) {
        scanf("%d", &st[i].cid[j]);
    }
    i++;
}

// Function to find the student by roll no
void find_rl() {
    int x;
    printf("Enter the Roll Number of the student: ");
    scanf("%d", &x);
    for (int j = 0; j < i; j++) {
        if (x == st[j].roll) {
            printf("The Student's Details are:\n");
            printf("First name: %s\n", st[j].fname);
            printf("Last name: %s\n", st[j].lname);
            printf("CGPA: %.2f\n", st[j].cgpa);
            printf("Courses IDs: ");
            for (int k = 0; k < 5; k++) {
                printf("%d ", st[j].cid[k]);
            }
            printf("\n");
            return;
        }
    }
    printf("Student not found!\n");
}

// Function to find the student by first name
void find_fn() {
    char a[50];
    printf("Enter the First Name of the student: ");
    scanf("%s", a);
    int found = 0;
    for (int j = 0; j < i; j++) {
        if (!strcmp(st[j].fname, a)) {
            printf("The Student's Details are:\n");
            printf("First name: %s\n", st[j].fname);
            printf("Last name: %s\n", st[j].lname);
            printf("Roll Number: %d\n", st[j].roll);
            printf("CGPA: %.2f\n", st[j].cgpa);
            printf("Courses IDs: ");
            for (int k = 0; k < 5; k++) {
                printf("%d ", st[j].cid[k]);
            }
            printf("\n");
            found = 1;
            break;
        }
    }
    if (!found) {
        printf("Student not found!\n");
    }
}

// Function to find students enrolled in a particular course
void find_c() {
    int id;
    printf("Enter the course ID: ");
    scanf("%d", &id);
    int found = 0;
    for (int j = 0; j < i; j++) {
        for (int k = 0; k < 5; k++) {
            if (id == st[j].cid[k]) {
                printf("The Student's Details are:\n");
                printf("First name: %s\n", st[j].fname);
                printf("Last name: %s\n", st[j].lname);
                printf("Roll Number: %d\n", st[j].roll);
                printf("CGPA: %.2f\n", st[j].cgpa);
                found = 1;
                break;
            }
        }
    }
    if (!found) {
        printf("No students found for this course ID.\n");
    }
}

// Function to print the total number of students
void tot_s() {
    printf("The total number of students is %d\n", i);
    printf("You can have a maximum of 50 students.\n");
    printf("You can add %d more students.\n", 50 - i);
}

// Function to delete a student by roll number
void del_s() {
    int a;
    printf("Enter the Roll Number of the student you want to delete: ");
    scanf("%d", &a);
    for (int j = 0; j < i; j++) {
        if (a == st[j].roll) {
            for (int k = j; k < i - 1; k++) {
                st[k] = st[k + 1];
            }
            i--;
            printf("The Roll Number has been removed successfully.\n");
            return;
        }
    }
    printf("Student not found!\n");
}

// Function to update a student's data
void up_s() {
    printf("Enter the roll number to update the entry: ");
    int x;
    scanf("%d", &x);
    for (int j = 0; j < i; j++) {
        if (st[j].roll == x) {
            printf("1. First name\n2. Last name\n3. Roll number\n4. CGPA\n5. Courses\n");
            int z;
            scanf("%d", &z);
            switch (z) {
                case 1:
                    printf("Enter the new first name: ");
                    scanf("%s", st[j].fname);
                    break;
                case 2:
                    printf("Enter the new last name: ");
                    scanf("%s", st[j].lname);
                    break;
                case 3:
                    printf("Enter the new roll number: ");
                    scanf("%d", &st[j].roll);
                    break;
                case 4:
                    printf("Enter the new CGPA: ");
                    scanf("%f", &st[j].cgpa);
                    break;
                case 5:
                    printf("Enter the new courses (5 course IDs): ");
                    for (int k = 0; k < 5; k++) {
                        scanf("%d", &st[j].cid[k]);
                    }
                    break;
            }
            printf("Updated successfully.\n");
            return;
        }
    }
    printf("Student not found!\n");
}

// Driver code
int main() {
    int choice;
    while (1) {
        printf("The Task that you want to perform\n");
        printf("1. Add the Student Details\n");
        printf("2. Find the Student Details by Roll Number\n");
        printf("3. Find the Student Details by First Name\n");
        printf("4. Find the Student Details by Course ID\n");
        printf("5. Find the Total number of Students\n");
        printf("6. Delete the Student Details by Roll Number\n");
        printf("7. Update the Student Details by Roll Number\n");
        printf("8. To Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                add_student();
                break;
            case 2:
                find_rl();
                break;
            case 3:
                find_fn();
                break;
            case 4:
                find_c();
                break;
            case 5:
                tot_s();
                break;
            case 6:
                del_s();
                break;
            case 7:
                up_s();
                break;
            case 8:
                exit(0);
                break;
            default:
                printf("Invalid choice. Please try again.\n");
                break;
        }
    }
    return 0;
}
