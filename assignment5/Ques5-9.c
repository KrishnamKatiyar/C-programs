#include <stdio.h>

int main() {
    int marks;
    char grade;


    printf("Enter your marks: ");
    scanf("%d", &marks);


    if (marks < 0 || marks > 100) {
        printf("Invalid marks! Please enter marks between 0 and 100.\n");
        return 1; 
    }

    switch (marks / 10) {
        case 10: 
        case 9:
            grade = 'A';
            break;
        case 8:
            grade = 'B';
            break;
        case 7:
            grade = 'C';
            break;
        case 6:
            grade = 'D';
            break;
        default:
            grade = 'F';
            break;
    }

    printf("Your grade is: %c\n", grade);

    return 0;
}
