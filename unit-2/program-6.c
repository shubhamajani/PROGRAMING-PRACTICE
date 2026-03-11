#include <stdio.h>

struct Student {
    int id;
    char name[50];
    int joinYear;
};

void printStudents2019(struct Student s[], int n) {
    for(int i = 0; i < n; i++) {
        if(s[i].joinYear == 2019) {
            printf("ID: %d\n", s[i].id);
            printf("Name: %s\n", s[i].name);
            printf("Join Year: %d\n\n", s[i].joinYear);
        }
    }
}

int main() {
    struct Student s[4] = {
        {1, "Rahul", 2018},
        {2, "Amit", 2019},
        {3, "Neha", 2019},
        {4, "Priya", 2020}
    };

    printStudents2019(s, 4);

    return 0;
}
