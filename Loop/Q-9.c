
/*Q-9 : Write a program (WAP) that will find the grade of N students. For each student, it will take the marks of his/her the
attendance (on 5 marks), assignment (on 10 marks), class test (on 15 marks), midterm (on 50 marks), term final (on 100 marks).
Then based on the tables shown below, the program will output his grade.          */


#include<stdio.h>
int main(){
    float num1,num2,num3,num4,num5;
    float A,HW,CT,MT,TF;
    int n,i;

    printf("Enter the number of students : \n");
    scanf("%d",&n);

    for (i=1; i<=n; i++){
        printf("Calculating the %d student's grade : \n",i);

        printf("Enter the number of Attendance (A) : \n");
        scanf("%f",&num1);
            A=num1;
        printf("Enter the number of Assignments (HW) : \n");
        scanf("%f",&num2);
            HW=num2;
        printf("Enter the number of Class Tests (CT) : \n");
        scanf("%f",&num3);
            CT=num3;
        printf("Enter the number of Mid Term (MT) : \n");
        scanf("%f",&num4);
            MT=(30*num4)/50;
        printf("Enter the number of Term Final (TF) : \n");
        scanf("%f",&num5);
            TF=(40*num5)/100;

        float total=A+HW+CT+MT+TF;

        if(total>=90 && total<=100){
            printf("Student %d grade is : A\n",i);
        }
        else if(total>=86 && total<=89){
            printf("Student %d grade is : A-\n",i);
        }
        else if(total>=82 && total<=85){
            printf("Student %d grade is : B+\n",i);
        }
        else if(total>=78 && total<=81){
            printf("Student %d grade is : B\n",i);
        }
        else if(total>=74 && total<=77){
            printf("Student %d grade is : B-\n",i);
        }
        else if(total>=70 && total<=73){
            printf("Student %d grade is : C+\n",i);
        }
        else if(total>=66 && total<=69){
            printf("Student %d grade is : C\n",i);
        }
        else if(total>=62 && total<=65){
            printf("Student %d grade is : C-\n",i);
        }
        else if(total>=58 && total<=61){
            printf("Student %d grade is : D+\n",i);
        }
        else if(total>=55 && total<=57){
            printf("Student %d grade is : D\n",i);
        }
        else if(total<57){
            printf("Student %d grade is : F\n",i);
        }
    }

    return 0;
}
