/*Q-10 : WAP that will take n integers into an array, and then search a number into that array. If found then print its index.
If not found then print “NOT FOUND”.Sample input Sample output
(8)     7 8 1 3 2 6 4 3     3       FOUND at index position: 3, 7
(8)     7 8 1 3 2 6 4 3     5               NOT FOUND*/


#include<stdio.h>

int main(){

    int a[8];
    int n,x,i,searching_number=0;

    printf("Please enter the total number/size of integers for the array : ");
    scanf("%d", &n);
    printf("\n");

    printf("Please enter the integers for the array : \n");
    for (i=0;  i<n;  i++){
            scanf("%d", &a[i]);
    }

    printf("\nEnter the number for searching into the array : ");
    scanf("%d", &x);

    for (i=0;  i<n;  i++){
        if(a[i]==x){
            searching_number=1;
            break;
        }
    }

    if(searching_number==1){
        printf("\n%d Found at index position : [%d]\n", x, i);
    }
    else{
        printf("\nNOT FOUND\n");
    }

    return 0;
}
