
/*Q-3 : Write a program that will print following series upto Nth terms[1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, …….]
Sample input Sample output
(2)      1, 0
(5)      1, 0, 1, 0, 1
(11)     1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1              */



#include <stdio.h>

int main(){

 int n,i;

    printf("Please Enter the number :\n");
    scanf("%d", &n);

    for (i=1; i<=n; i++){

        if(i%2==0){
           if(i==n){
              printf("0");
           }
           else{
              printf("0 , ");
           }
        }
        else if(i%2!=0){
           if(i==n){
              printf("1");
           }
           else{
              printf("1 , ");
           }
        }
    }

 return 0;
}
