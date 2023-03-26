/* Q-12 : WAP that will take n integer numbers as input in an array and then insert a number in a position specified by the user
in the array
(10)          9 11 34 23 16 15 2 37 89 54        number: 78 position: 4              9 11 34 23 78 16 15 2 37 89 54
(5 )             32 14 9 48 6                    number: 16 position: 0                 16 32 14 9 48 6                 */



#include<stdio.h>

int main(){

    int a[100];
    int n,i,value,position;						//position=index no[position-1]     3rd position = index no 2

    printf("Please enter the size of the array : \n");
    scanf("%d", &n);

    printf("\nPlease enter the integers for the array : \n");
    for (i=0;  i<n;  i++)
         scanf("%d", &a[i]);

    printf("Please enter the position of the number : \n");
    scanf("%d", &position);

    printf("Please enter the number you want to entered into the array : \n");
    scanf("%d", &value);

    for (i=n-1;  i>=position-1;  i--)
         a[i+1]=a[i];
         a[position-1]=value;

     printf("Printing array with the inserted number : \n");
     for (i=0;  i<=n;  i++)
          printf("%d  ",a[i]);

    return 0;
}
