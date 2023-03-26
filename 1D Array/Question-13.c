/* Q-13 : WAP that will take n integer numbers as input in an array and then delete a number from a position specified by the
user in the array
(10)          9 11 34 23 16 15 2 37 89 54        position: 4              9 11 34 23 15 2 37 89 54
(5 )             32 14 9 48 6                    position: 0                  14 9 48 6                 */



#include<stdio.h>

int main(){

    int a[100];
    int n,i,position;                       //position=index no[position-1]     3rd position = index no 2

    printf("Please enter the size of the array : \n");
    scanf("%d", &n);

    printf("\nPlease enter the integers for the array : \n");
    for (i=0;  i<n;  i++){
         scanf("%d", &a[i]);
    }

    printf("Please enter the position of the number you want to delete : \n");
    scanf("%d", &position);

    if(position>=n+1){
        printf("Deletion of the number from a specific position is not possible\n");
    }
    else{
        for (i=position-1;  i<n-1;  i++)
            a[i]=a[i+1];

        printf("Printing array after deleting the number : \n");
        for (i=0;  i<n-1;  i++)
            printf("%d  ",a[i]);
    }

    return 0;
}