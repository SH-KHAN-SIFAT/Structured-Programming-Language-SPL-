/*Q-16 : WAP that will take n positive integers into an array A. Now find all the integers that have an odd index and replace
them by 0 in array A. Finally show all elements of array A.Sample input Sample output
(8)          7 8 1 3 2 6 4 3       7 0 1 0 2 0 4 0
(3)               3 2 1                3 0 1  */


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

    printf("Replacing odd index integers by '0' & Printing the array : \n");
    for (i=0;  i<n;  i++){

        if(i%2!=0){
            printf("0\n");
        }
        else{
           printf("%d\n", a[i]);
        }
    }

    return 0;
}
