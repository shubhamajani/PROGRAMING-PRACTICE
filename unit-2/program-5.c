Write a function to print names of students whose grade is greater
than 5.0

#include <stdio.h>

struct Student {
    char name[50];
    int roll;
    float marks;
};

// Function to print students with grade > 5.0
void printAboveFive(struct Student s[], int size) {
    int i;
    printf("\nStudents having grade greater than 5.0:\n");

    for(i = 0; i < size; i++) {
        if(s[i].marks > 5.0) {
            printf("%s\n", s[i].name);
        }
    }
}

int main() {
    struct Student s[5];
    int i;

    // Input data
    for(i = 0; i < 5; i++) {
        printf("\nEnter details for Student %d\n", i + 1);

        printf("Name: ");
        scanf("%s", s[i].name);

        printf("Roll Number: ");
        scanf("%d", &s[i].roll);

        printf("Marks: ");
        scanf("%f", &s[i].marks);
    }

    // Function call
    printAboveFive(s, 5);

    return 0;
}
