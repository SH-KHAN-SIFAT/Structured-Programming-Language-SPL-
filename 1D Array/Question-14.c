/*Q-14 : WAP that will first take n integers into an array A and then m integers into array B. Now swap all elements between array
A and B. Finally show all elements of both array A and B.Sample input Sample output
(8)          7 8 1 3 2 6 4 3
(3)              3 2 1
Array A : 3 2 1             Array B : 7 8 1 3 2 6 4 3  */




#include<stdio.h>

int main(){

    int a[8],b[3];
    int n,m,i,j;

    printf("Please enter the total number/size of integers for the first array : ");
    scanf("%d", &n);
    printf("\n");

    printf("Please enter the integers for the first array : \n");
    for (i=0;  i<n;  i++){
            scanf("%d", &a[i]);
    }

    printf("Please enter the total number/size of integers for the second array : ");
    scanf("%d", &m);
    printf("\n");

    printf("Please enter the integers for the second array : \n");
    for (j=0;  j<m;  j++){
            scanf("%d", &b[j]);
    }

    printf("Printing the second array into the first array : \n");
    for (j=0,i=0;  j<m,i<m;  j++,i++){
            a[i]=b[j];
        printf("%d\n", a[i]);
    }

    printf("Printing the first array into the second array : \n");
    for (i=0,j=0;  i<n,j<n;  i++,j++){
            b[j]=a[i];
        printf("%d\n", b[j]);
    }

    return 0;
}