
/*Q-12:  Function to swap two numbers. (Restriction: Pass by value)
sample Input -                 10 20
sample output  -       Value in function: 20 10
                       Value in main:     10 20                                             */



#include<stdio.h>

void swap(int x , int y);

int main(){

    int num1,num2;

    printf("Please enter the two numbers for swapping :\n");
    scanf("%d%d",&num1,&num2);

    swap(num1 , num2);

    printf("\nValue in main : %d  %d\n",num1 ,num2);

    return 0;

}

void swap(int x , int y){

    int temp;

    temp=x;
    x=y;
    y=temp;

    printf("\nValue in function :%d  %d\n",x ,y);

}
