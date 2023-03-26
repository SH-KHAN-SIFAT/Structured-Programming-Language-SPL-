
/*Q-3: Function to determine if a number is even or odd..
sample Intputs - 3          Odd
sample output  - 8          Even       */



#include<stdio.h>

int Check(int x);

int main(){

    int num;

    printf("Please enter any number : \n");
    scanf("%d",&num);

    Check(num);

    return 0;

}

int Check(int x){

    if(x%2==0){
        printf("The number is Even\n");
    }
    else{
        printf("The number is Odd\n");
    }

    return 0;

}
