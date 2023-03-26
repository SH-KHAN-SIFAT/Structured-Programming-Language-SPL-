/*Q-5: Function that takes two numbers as input and determines if the first number is greater than,
equal to or less than the second number.
sample Intputs -        5 4                                      8 8
sample output  - 5 is greater than 4                        8 is equal to 8         */



#include<stdio.h>

int Check(int x , int y);

int main(){

    int num1,num2;

    printf("Please enter the first number value : \n");
    scanf("%d",&num1);
    printf("Please enter the second number value : \n");
    scanf("%d",&num2);

    Check(num1,num2);

    return 0;

}

int Check(int x , int y){

    if(x>y){
        printf("%d is greater than %d\n",x , y);
    }
    else if(x<y){
        printf("%d is less than %d\n",x , y);
    }
     else{
        printf("%d is equal to %d\n",x ,y);
    }

    return 0;

}

