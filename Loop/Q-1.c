/*Q-1 : Write a program that will print following series upto Nth terms[1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, …….]
Sample input Sample output
(2)      1, 2
(5)      1, 2, 3, 4, 5
(11)     1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11              */



#include <stdio.h>

int main(){

 int n,i;

    printf("Please Enter the number :\n");
    scanf("%d", &n);

    for (i=1; i<=n; i++){

        if(i==1){
           printf("%d", i);
        }
        else{
           printf(" , %d", i);
        }
    }

 return 0;
}

