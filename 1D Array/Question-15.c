/*Q-15 : WAP that will take n positive integers into an array A. Now find all the integers that are divisible by 3 and replace
them by -1 in array A. Finally show all elements of array A.Sample input Sample output
(8)       7 8 1 3 2 6 4 3                7 8 1 -1 2 -1 4 -1
(3)             3 2 1                        -1 2 1  */


#include<stdio.h>

int main(){

    int a[8];
    int n,i;

    printf("Please enter the total number/size of integers for the array : ");
    scanf("%d", &n);
    printf("\n");

    printf("Please enter the integers for the array : \n");
    for (i=0;  i<n;  i++){
            scanf("%d", &a[i]);
    }

    printf("Printing the array according to the instruction : \n");
    for (i=0;  i<n;  i++){

        if(a[i]%3==0){
           printf("-1\n");
        }
        else{
           printf("%d\n", a[i]);
        }
    }

    return 0;
}