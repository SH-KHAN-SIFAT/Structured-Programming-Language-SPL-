/*Q-12 :Write a program (WAP) that will print Fibonacci series upto Nth terms.
1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, …….

(3)                       1,1,2
(4)                       1,1,2,3
(7)                       1,1,2,3,5,8,13       */


#include<stdio.h>

int main(){

    int n,i,j;

    printf("Please enter the value of n : \n");
    scanf("%d",&n);

    int first=1;
    int second=1;

    printf("Printing the series : 1,1");

    for(i=3; i<=n; i++){
        j=first+second;
        first=second;
        second=j;
        printf(",%d",j);
    }

    return 0;
}
