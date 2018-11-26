#include <stdio.h>
#include <stdlib.h>

int main (void) {
    struct{
        int id;
        char name[30];
        int marks;
    }student;
    
    printf("\nEnter ID of student : ");
    scanf("%d", &student.id);
    printf("\nEnter Name of student : ");
    gets(student.name);
    printf("\nEnter marks of student : ");
    scanf("%d", &student.marks);

    printf("\n\n");

    printf("\nID : %d", student.id);
    printf("\nName : %s", student.name);
    printf("\nMarks : %d", student.marks);

    return 0;

}