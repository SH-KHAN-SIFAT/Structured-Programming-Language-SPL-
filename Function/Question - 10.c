
/*Q-10: Function to take two positive numbers x and y as input and calculate x to the power y.
sample Input -                  3 4                              10 3
sample output  -         3 to the power 4 is 81           10 to the power 3 is 1000       */



#include<stdio.h>

int power(int num1 , int num2);

int main(){

    int x,y;

    printf("Please enter the value of base(x) :\n");
    scanf("%d",&x);
    printf("Please enter the value of power(y) :\n");
    scanf("%d",&y);

    printf("\n%d to the power of %d is : %d\n",x ,y ,power(x ,y));

    return 0;

}

int power(int num1 , int num2){

    int ans=1;

    for(int i=1;  i<=num2;  i++){
        ans*=num1;
    }

    return ans;

}

