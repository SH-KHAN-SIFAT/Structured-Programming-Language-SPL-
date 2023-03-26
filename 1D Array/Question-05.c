/*Q-5 : WAP that will take n integer numbers into an array, and then sum up all the even indexed integers in that array.
Sample input Sample output
(5)        1 2 3 4 5       9
(6)       2 8 3 9 0 1      5*/



#include<stdio.h>

int main(){

    int arr[5];
    int n,i;
    int sum=0;


    printf("Please enter the number of inputs : ");
    scanf("%d",&n);
    printf("\n");

    for (i=0;  i<n;  i++){
        scanf("%d", &arr[i]);
    }

    for (i=0;  i<n;  i=i+2){
          sum=sum+arr[i];
    }

    printf("\n\nThe sum of all the even index integer is : %d\n", sum);

    return 0;
}
