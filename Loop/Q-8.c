/*Q-8 : Write a program (WAP) that will reverse the digits of an input integer
sample input                               Sample output
1 3 5 7 9                                   9 7 5 3 1
4 3 2 1                                     1 2 3 4             */


#include<stdio.h>
int main(){
    int num,r,reverse=0;

    printf("Enter any number: ");
    scanf("%d",&num);

    while(num!=0){
         r=num%10;
         reverse=reverse*10+r;
         num=num/10;
    }

    printf("Reversed of number: %d",reverse);
    return 0;
}
	