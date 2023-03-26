/*Q-19: Function “GeneratePrime()” to compute the prime numbers less than N, where N is an input integer.
GeneratePrime() uses IsPrime() to check whether a number is prime or not
sample Input -                     5                                           10
sample output  -       Prime less than 5: 2, 3                   Prime less than 10: 2, 3, 5, 7            */



#include<stdio.h>

void Generate_prime(int num);
int Is_prime(int number);

int main(){

    int x;

    printf("Please enter the number greater than 2 for generating prime numbers :\n");
    scanf("%d",&x);

    printf("Prime numbers less than %d is : ",x);
    Generate_prime(x);
    printf("\n");

    return 0;

}

void Generate_prime(int num){

    int j=2;
    while(j<num){
        if(Is_prime(j)){
            printf("%d ",j);
        }
        j++;
    }
}

int Is_prime(int number){

    for(int i=2;  i<=number/2;  i++){
        if(number%i==0){
            return 0;
        }
    }
    return 1;
}
