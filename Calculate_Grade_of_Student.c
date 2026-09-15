#include <stdio.h>

int main() {
    float marks;
    char grade;

    printf("Enter the student's marks: ");
    scanf("%f", &marks);
    if (marks < 0 || marks > 100) {
        printf("Invalid marks entered. Please enter a value between 0 and 100.\n");
        return 1; // Exit the program with an error code
    }
    else if (marks >= 90) {
        printf("The student's grade is: A\n");
    } else if (marks >= 80) {
        printf("The student's grade is: B\n");
    } else if (marks >= 70) {
        printf("The student's grade is: C\n");
    } else {
        printf("The student's grade is: D\n");
    }

    return 0;
}