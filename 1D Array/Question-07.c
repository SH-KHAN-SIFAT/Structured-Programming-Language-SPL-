/*Q-7 : WAP that will take n integer numbers into an array, and then reverse all the integers within that array.
Finally print them all from 0 index to last valid index.Sample input Sample output
(5)      1 2 3 4 5       5 4 3 2 1
(6)     2 8 3 9 0 1     1 0 9 3 8 2*/


#include<stdio.h>

int main(){

    int a[5];
    int n,i;


    printf("Please enter the number of inputs for first array : ");
    scanf("%d",&n);
    printf("\n");

    for (i=0;  i<n;  i++){
        scanf("%d", &a[i]);
    }

    printf("\nPrinting the integers into the first array :\n\n");
    for (i=0;  i<n;  i++){
        printf("%d\n", a[i]);
    }

    printf("\nPrinting the integers in reverse order into the same array : \n\n");
    for (i=n-1;  i>=0;  i--){
        printf("%d\n", a[i]);
    }

    return 0;
}
