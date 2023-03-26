/*Q-4 : Print the total marks of each student for each subject in file “output.txt”. Use the function void
printtotal(struct student st[]) to perform this task. A sample is shown below:
Student 1:  Subject 1 total: 95
            Subject 2 total: 93
            Subject 3 total: 77                             */



#include<stdio.h>



struct student{

    char NAME[100];
    char ID[100];
    float MARKS[3][4];
    float CGPA;

};

void printtotal(struct student S[]);

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

    printtotal(S);

    return 0;

}

void printtotal(struct student S[]){

    FILE *fp;
    fp=fopen("Output.txt","w");

    for(int i=0;  i<4;  i++){
        fprintf(fp,"Student %d :\n",i+1);
        float sum=0;
        for(int x=0;  x<3;  x++){
            fprintf(fp,"Subject %d marks :",x+1);
            for(int y=0;  y<4;  y++){
                sum+=S[i].MARKS[x][y];
            }
            fprintf(fp,"%.0f  ",sum);
            fprintf(fp,"\n");
        }
        fprintf(fp,"\n");
    }

    fclose(fp);

}
