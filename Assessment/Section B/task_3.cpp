// Assessment Task 3

#include <stdio.h>

struct Student {
    char name[50], grade;
    int rollno;
    float marks;
};
void getData(struct Student s[], int n) {
    for (int i = 0; i < n; i++) {
        printf("\nEnter details of Student %d\n", i + 1);

        printf("Roll No: ");
        scanf("%d", &s[i].rollno);
        printf("Name: ");
        scanf(" %s", s[i].name);
        printf("Marks: ");
        scanf("%f", &s[i].marks);
    }
}
void grade(struct Student s[], int i) {
    if (s[i].marks >= 90){
        s[i].grade = 'A';
    }else if (s[i].marks >= 80){
        s[i].grade = 'B';
    }else if (s[i].marks >= 70){
        s[i].grade = 'C';
    }else if (s[i].marks >= 60){
        s[i].grade = 'D';
    }else{
        s[i].grade = 'F';
    }
}

void displayData(struct Student s[], int n) {
    printf("\n-------------------------------------------------------\n");
    printf("%s","Roll No");
	printf("  %s","   Name");
    printf("    %s","     Marks");
    printf("    %s","     Grade");
    printf("\n-------------------------------------------------------\n");

    for (int i = 0; i < n; i++) {
        printf("%d",s[i].rollno);
		printf("        %s",s[i].name);
        printf("        %.2f",s[i].marks);
        printf("          %c",s[i].grade);
    }
    printf("\n-------------------------------------------------------\n");
}
void giveTopper(struct Student s[], int n) {
    int top = 0;
    for (int i = 1; i < n; i++) {
        if (s[i].marks > s[top].marks) {
            top = i;
        }
    }
    printf("\nTopper: %s\n", s[top].name);
    printf("Marks : %.2f\n", s[top].marks);
}

main() {
    int n;
    printf("Enter number of students: ");
    scanf("%d", &n);
    struct Student s[n];
    getData(s, n);
    for (int i = 0; i < n; i++) {
        grade(s, i);
    }
    displayData(s, n);
    giveTopper(s, n);
}

