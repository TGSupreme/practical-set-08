#include <stdio.h>

struct student_record {
    char name[50];
    char branch[50];
    int total_marks;
};

int main() {
	
/*53. Design a structure student_record to contain name, branch and total marks obtained.
Develop a program to read data for 10 students in a class and print them.*/

    struct student_record student[10];
    int i;

    printf("\tStudent Details\n");
    printf("==========================================");

    for (i = 0; i < 10; i++) {
        printf("\n\nEnter Name For Student %d: ", i+1);
        scanf("%s", student[i].name);
        printf("\nEnter Branch For Student %d: ", i+1);
        scanf("%s", student[i].branch);
        printf("\nEnter Total Marks For Student %d: ", i+1);
        scanf("%d", &student[i].total_marks);
    }

    printf("\nStudent Records:\n");
    for (i = 0; i < 10; i++) {
        printf("\nName: %s\n", student[i].name);
        printf("Branch: %s\n", student[i].branch);
        printf("Total Marks: %d\n", student[i].total_marks);
        printf("\n");
    }

    return 0;
}

