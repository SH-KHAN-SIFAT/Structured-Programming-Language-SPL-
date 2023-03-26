/*Q-5 : Print the maximum and minimum CGPA of the class in file “output.txt”. Use the function int maxCGPA(struct student st[])
 and int minCGPA(stuct student st[]) to perform this task. A sample is shown below:
Maximum CGPA: 3.8
Minimum CGPA: 3.2                            */



#include<stdio.h>

struct student{

    char NAME[100];
    char ID[100];
    float MARKS[3][4];
    float CGPA;

};

int maxCGPA(struct student S[]);

int minCGPA(struct student S[]);

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

    maxCGPA(S);

    minCGPA(S);

    return 0;

}

int maxCGPA(struct student S[]){

    FILE *fp;
    fp=fopen("Output.txt","a");

    float max=S[0].CGPA;

    for(int i=0;  i<5;  i++){
        if(max<S[i].CGPA){
            max=S[i].CGPA;
        }
    }

    fprintf(fp,"Maximum CGPA :%.2f\n",max);

    fclose(fp);

    return 0;
}

int minCGPA(struct student S[]){

    FILE *fp;
    fp=fopen("Output.txt","a");

    float min=S[0].CGPA;

    for(int i=0;  i<5;  i++){
        if(min>S[i].CGPA){
            min=S[i].CGPA;
        }
    }

    fprintf(fp,"Minimum CGPA :%.2f\n",min);

    fclose(fp);

    return 0;
}

