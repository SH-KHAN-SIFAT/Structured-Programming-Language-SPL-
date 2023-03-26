
/*Q-9: Function to calculate the factorial of a number.
sample Intputs -           3                   6
sample output  -           5                  120                    */



#include<stdio.h>

int factorial(int num);

int main(){

    int n;

    printf("Please enter a number for finding factorial :\n");
    scanf("%d",&n);

    printf("\nThe factorial of a number is : %d\n",factorial(n));

    return 0;

}

int factorial(int num){

    int ans=1;

    for(int i=num;  i>0;  i--){
        ans*=i;
    }

    return ans;

}
