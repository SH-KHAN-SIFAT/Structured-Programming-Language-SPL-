
/*Q-4: Function to determine if a number is positive, negative or zero.
sample Intputs -    3               -5               0
sample output  - positive         negative          zero       */



#include<stdio.h>

float Check(float x);

int main(){

    float num;

    printf("Please enter any number : \n");
    scanf("%f",&num);

    Check(num);

    return 0;

}

float Check(float x){

    if(x>0){
        printf("The number is positive\n");
    }
    else if(x==0){
        printf("The number is zero\n");
    }
     else{
        printf("The number is negative\n");
    }

    return 0;

}
