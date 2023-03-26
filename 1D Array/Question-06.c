/*Q-6 : WAP that will take n integer numbers in an array, n different integer numbers in a second array and put the
sum of the same indexed numbers from the two arrays in a third array.Sample input Sample output
(5)      1 2 3 4 5              2 8 3 4 8              3 10 6 8 13
(8)   2 8 3 9 0 1 6 10       5 1 4 8 9 3 1 5       7 9 7 17 9 4 7 15*/




#include<stdio.h>

int main(){

    int a[5],b[5],sum[5];
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

    printf("\nPlease enter the number of inputs for second array : ");
    scanf("%d",&n);
    printf("\n");

    for (i=0;  i<n;  i++){
        scanf("%d", &b[i]);
    }

    printf("\nPrinting the integers into the second array : \n\n");
    for (i=0;  i<n;  i++){
        printf("%d\n", b[i]);
    }

    for (i=0;  i<n;  i++){
        sum[i]=a[i]+b[i];
    }

    printf("\nPutting the sum of the two arrays into the third array : \n\n");
    for (i=0;  i<n;  i++){
        printf("%d\n", sum[i]);
    }

    return 0;
}