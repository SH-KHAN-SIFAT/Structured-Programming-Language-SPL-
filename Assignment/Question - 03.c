/*Q-3 :Print the stored data as output in file “output.txt”. Use the function void print(struct student st[]) to
print the data. A sample is shown below:
Student 1:
Name: Tamim
Id: 011073054
Subject 1 marks: 10 20 28 37
Subject 2 marks: 10 18 30 35
Subject 3 marks: 10 15 18 34
CGPA: 3.8                                                                                 */


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
    FILE *fp;

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

    fp=fopen("Output.txt","w");

    for(i=0;  i<n;  i++){
        fprintf(fp,"Student %d :\n",i+1);
        fprintf(fp,"Name :%s\n",S[i].NAME);
        fprintf(fp,"Id :%s\n",S[i].ID);
        for(x=0;  x<3;  x++){
            fprintf(fp,"Subject %d marks :",x+1);
            for(y=0;  y<4;  y++){
                fprintf(fp,"%.0f  ",S[i].MARKS[x][y]);
            }
            fprintf(fp,"\n");
        }
        fprintf(fp,"CGPA :%.1f\n",S[i].CGPA);
        fprintf(fp,"\n");
    }

    fclose(fp);

    return 0;

}

