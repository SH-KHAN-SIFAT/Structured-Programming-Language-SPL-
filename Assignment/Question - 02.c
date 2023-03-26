/*Q-2 :Take ten students’ information as input in an array struct student st[10]. Note that all inputs must be
taken from a file called “input.txt” using file operations. A sample is shown below:
Tamim
011073054
10 20 28 37
10 18 30 35
10 15 18 34
3.8
………………………
                                                                 */


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
    FILE *File;

    File=fopen("Input.txt","r");

    printf("Please enter the total number of students :");
    scanf("%d",&n);

   for(i=0;  i<n;  i++){
        fflush(stdin);
        fscanf(File,"%s",&S[i].NAME);
        fflush(stdin);
        fscanf(File,"%s",&S[i].ID);
        fflush(stdin);
        for(x=0;  x<3;  x++){
            for(y=0;  y<4;  y++){
                fscanf(File,"%f",&S[i].MARKS[x][y]);
            }
        }
        fflush(stdin);
        fscanf(File,"%f",&S[i].CGPA);
    }

    fclose(File);

    return 0;

}






















