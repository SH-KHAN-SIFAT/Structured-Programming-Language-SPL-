/*Q-09 :Declare a structure of students with three variables (name, id and CGPA). Now take the input of two students and print
the information of that student who has better CGPA with a function.                                           */


#include<stdio.h>

struct student_info{

    char NAME[50];
    char ID[50];
    float CGPA;

};

void Better_CGPA(struct student_info x , struct student_info y);

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

        Better_CGPA(a , b);

    return 0;

}

void Better_CGPA(struct student_info x , struct student_info y){

        if(x.CGPA>y.CGPA){
            printf("\n\nStudent NAME :");
            puts(x.NAME);
            printf("Student ID :");
            puts(x.ID);
            printf("Student CGPA :%.2f\n\n",x.CGPA);
        }
        else if(x.CGPA<y.CGPA){
            printf("\n\nStudent NAME :");
            puts(y.NAME);
            printf("Student ID :");
            puts(y.ID);
            printf("Student CGPA :%.2f\n\n",y.CGPA);
        }
        else{
            printf("\n\nCGPA is equal for both students\n\n");
        }
}
