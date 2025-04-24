#include <stdio.h>
#include <string.h>


struct person {
    int roll_no;
    char name[40];
    char dep[40];
    char course[40];
    int year;
};


void name(struct person q[], int n) {
    int year;
    printf("Enter year: ");
    scanf("%d", &year);
    for (int i = 0; i < n; i++) { 
        if (q[i].year == year) {
            printf("Name: %s\n", q[i].name);
        }
    }
}

void roll_no(struct person r[], int n) {
    int roll;
    printf("Enter roll number: ");
    scanf("%d", &roll); 
    for (int i = 0; i < n; i++) { 
        if (r[i].roll_no == roll) {
            printf("Details:Roll No.: %d\n Name: %s\n Department:%s\n Course:%s\n Yaer:%d\n",
                   r[i].roll_no, r[i].name, r[i].dep, r[i].course, r[i].year);
        }
    }
}

int main() {
    struct person p[450];
    int n = 5;
    
    // Input details of students
    for (int i = 0; i < n; i++) {
        printf("Enter details of Student (Roll_no Name Department Course Year): ");
        scanf("%d %s %s %s %d", &p[i].roll_no, p[i].name, p[i].dep, p[i].course, &p[i].year); // Removed trailing space
    }

    
    name(p, n);
    roll_no(p, n);

    return 0;
}
