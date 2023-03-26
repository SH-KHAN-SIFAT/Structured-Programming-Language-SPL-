/*Q-11 : WAP that will take n integers into an array A,and then copy all numbers in reverse order from array A to another array B
Finally show all elements of both array A and B.Sample input Sample output
(8)       7 8 1 3 2 6 4 3     Array A : 7 8 1 3 2 6 4 3       Array B : 3 4 6 2 3 1 8 7
(3)            3 2 1          Array A : 3 2 1                 Array B : 1 2 3*/


#include<stdio.h>

int main(){

    int a[8],b[8];
    int n,i,j;

    printf("Please enter the total number/size of integers for the array : \n\n");
    scanf("%d", &n);

    printf("\nPlease enter the integers for the array : \n\n");
    for (i=0;  i<n;  i++){
         scanf("%d", &a[i]);
    }

    printf("\nprinting the array : \n\n");
    for (i=0;  i<n;  i++){
         printf("%d\n", a[i]);
        }

    printf("\nReversing  the array & printing into a new array : \n\n");
    for (i=n-1,j=0;  i>=0,j<n;  i--,j++){
         b[j]=a[i];
         printf("%d\n", b[j]);
        }

    return 0;
}
