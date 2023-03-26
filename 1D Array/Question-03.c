/*Q-3 : WAP that will take n integer numbers into an array, and then sum up all the even integers in that
array.Sample input Sample output
(5)       1 2 3 4 5       6
(6)      2 8 3 9 0 1      10*/



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

    printf("\nPrinting all the integers into the array : \n");
    for (i=0;  i<n;  i++){

        printf("\n%d", arr[i]);

        if(arr[i]% 2 == 0){
          sum=sum+arr[i];
        }
    }

    printf("\n\nThe sum of all even number is : %d\n", sum);

    return 0;
}
