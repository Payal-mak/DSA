#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// define structure for student information
typedef struct {
    char name[50];
    int id;
    char attendance; // P for present, A for absent
} Student;

// function to print student data
void print_student_data(Student *student) {
    printf("Student Name: %s\n", student->name);
    printf("Student ID: %d\n", student->id);
    printf("Student Attendance: %c\n", student->attendance);
}

int main() {
    int n, i, absent_count = 0;
    printf("Enter the number of students: ");
    scanf("%d", &n);
    getchar(); // to consume newline left in input buffer after scanf

    // dynamically allocate memory for an array of Student structures
    Student *students = (Student *) malloc(n * sizeof(Student));

    // input data for each student
    for (i = 0; i < n; i++) {
        scanf("%s %d %c", students[i].name, &students[i].id, &students[i].attendance);
        getchar(); // to consume newline left in input buffer after scanf
    }

    // print data for each student
    printf("\nAttendance Sheet:\n");
    for (i = 0; i < n; i++) {
        print_student_data(&students[i]);
        printf("\n");
    }

    // finding absent students
    printf("\nAbsent Students:\n");
    for (i = 0; i < n; i++) {
        if (students[i].attendance == 'A') {
            print_student_data(&students[i]);
            printf("\n");
            absent_count++;
        }
    }

    printf("\nTotal number of absent students: %d\n", absent_count);

    // free allocated memory
    free(students);

    return 0;
}