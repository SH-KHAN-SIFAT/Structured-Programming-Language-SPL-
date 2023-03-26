/*Q-08 :Declare a structure of students with three variables (name, id and cgpa). Now take the input of two students and print
the information of that student who has the higher cgpa.                                           */


#include<stdio.h>

struct student_info{

    char NAME[50];
    char ID[50];
    float CGPA;

};

int main(){

    struct student_info a,b;

        printf("Please enter the NAME,ID & CGPA of 1st student :\n");
        fflush(stdin);
        gets(a.NAME);
        fflush(stdin);
        gets(a.ID);
        fflush(stdin);
        scanf("%f",&a.CGPA);

        printf("Please enter the NAME,ID & CGPA of 2nd student :\n");
        fflush(stdin);
        gets(b.NAME);
        fflush(stdin);
        gets(b.ID);
        fflush(stdin);
        scanf("%f",&b.CGPA);

        if(a.CGPA>b.CGPA){
            printf("\n\nStudent NAME :");
            puts(a.NAME);
            printf("Student ID :");
            puts(a.ID);
            printf("Student CGPA :%.2f\n\n",a.CGPA);
        }
        else if(a.CGPA<b.CGPA){
            printf("\n\nStudent NAME :");
            puts(b.NAME);
            printf("Student ID :");
            puts(b.ID);
            printf("Student CGPA :%.2f\n\n",b.CGPA);
        }
        else{
            printf("\n\nCGPA is equal for both students\n\n");
        }

    return 0;

}
