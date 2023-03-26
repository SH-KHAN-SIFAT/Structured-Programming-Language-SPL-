/*Q-18: Function "IsPrime()" to determine whether a number is prime or not.
sample Input -            1                 2                  39                  11
sample output  -       Not prime          Prime              Not Prime            Prime          */


#include<stdio.h>

int Is_primse(int num);

int main(){

    int x;

    printf("Please enter the number for checking prime or not :\n");
    scanf("%d",&x);

    Is_primse(x);
    printf("\n");

    return 0;

}

int Is_primse(int num){

    int flag=0;
    for(int i=2;  i<num/2;  i++){
        if(num%i==0){
            flag=1;
            break;
        }
    }

    if(num==0){
         printf("\nThe number can't determind\n");
    }
    else if(num==1){
         printf("\nThe number is not prime\n");
    }
    else if(flag==0){
         printf("\nThe number is prime\n");
    }
    else{
         printf("\nThe number is not prime\n");
    }

    return 0;
}