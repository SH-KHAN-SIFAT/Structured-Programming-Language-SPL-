
/*Q-1 :1. Declare a structure student with the following attributes:
 A string called name
 A string called id
 A 2-D float array called marks to hold four marks for three subjects as shown below
 A float called cgpa                                                                                      */


#include<stdio.h>

struct student{

    char NAME[100];
    char ID[100];
    float MARKS[3][4];
    float CGPA;

};

int main(){

    struct student S[1000];
    int n,i,x,y;

    printf("Please enter the number of students :");
    scanf("%d",&n);

    for(i=0;  i<n;  i++){
        printf("Please enter the NAME,ID,MARKS & CGPA of %d student :\n",i+1);
        fflush(stdin);
        gets(S[i].NAME);
        fflush(stdin);
        gets(S[i].ID);
        fflush(stdin);
        for(x=0;  x<3;  x++){
            for(y=0;  y<4;  y++){
                scanf("%f",&S[i].MARKS[x][y]);
            }
        }
        fflush(stdin);
        scanf("%f",&S[i].CGPA);
        printf("\n\n");
    }

    printf("\n\n");

    for(i=0;  i<n;  i++){
        printf("%d student info :\n\n",i+1);
        printf("Student NAME :");
        puts(S[i].NAME);
        printf("Student ID :");
        puts(S[i].ID);
        for(x=0;  x<3;  x++){
            for(y=0;  y<4;  y++){
                printf("%.0f\t",S[i].MARKS[x][y]);
            }
            printf("\n");
        }
        printf("Student CGPA :%.1f",S[i].CGPA);
        printf("\n\n");
    }

    return 0;

}




















