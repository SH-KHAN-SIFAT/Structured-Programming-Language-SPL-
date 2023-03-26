/*Q-2 : WAP that will take n integer numbers into an array, and then sum up all the integers in
that array.Sample input Sample output
(5)        1 2 3 4 5     15
(6)       2 8 3 9 0 1    23 */



#include<stdio.h>

int main(){

    int arr[5];
    int n,i;
    int sum=0;

    printf("Please enter the number of inputs : ");
    scanf("%d",&n);

    for (i=0;  i<n;  i++){
        scanf("%d", &arr[i]);
    }

    printf("The sum of all integers is : \n");
    for (i=0;  i<n;  i++){
        sum=sum+arr[i];
    }

    printf("%d\n", sum);

    return 0;

}
