
/*Q-2 : Write a program that will print following series upto Nth terms[1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23, 25, 27, …….]
Sample input Sample output
(2)      1, 3
(5)      1, 3, 5, 7, 9
(11)     1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21              */



#include <stdio.h>

int main(){

 int n,i;

    printf("Please Enter the number :\n");
    scanf("%d", &n);

    for (i=1; i<=(2*n)-1; i=i+2){

        if(i==1){
           printf("%d", i);
        }
        else{
           printf(" , %d", i);
        }
    }

 return 0;
}

