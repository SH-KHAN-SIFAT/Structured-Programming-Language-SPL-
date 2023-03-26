/*Q-01 : Declare a structure of students with three member variables (name, id and cgpa), where name is a string and id are
strings, and cgpa is a float value.                                          */


#include<stdio.h>

struct student_info{

    char NAME[50];
    char ID[50];
    float CGPA;

};

int main(){

    struct student_info S[1000];
    int n,i;

    printf("Please enter the number of students :");
    scanf("%d",&n);

    for(i=0;  i<n;  i++){
        printf("Please enter the NAME,ID & CGPA of %d student :\n",i+1);
        fflush(stdin);
        gets(S[i].NAME);
        fflush(stdin);
        gets(S[i].ID);
        fflush(stdin);
        scanf("%f",&S[i].CGPA);
    }

    for(i=0;  i<n;  i++){
        printf("%d student info :\n\n",i+1);
        printf("Student NAME :");
        puts(S[i].NAME);
        printf("Student ID :");
        puts(S[i].ID);
        printf("Student CGPA :%.2f",S[i].CGPA);
        printf("\n\n");
    }

    return 0;

}

