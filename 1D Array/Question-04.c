/*Q-4 : WAP that will take n floating point numbers into an array, and then find the average of those
numbers.Sample input Sample output
(5)          1.2 5.6 10.3 4.5 5.2              5.36
(8)      2.1 8.3 3.7 9.2 0.6 1.5 6.4 10.1      8.38*/




#include<stdio.h>

int main(){

    float arr[5];
    int n,i;
    float sum=0, average;


    printf("Please enter the number of inputs : ");
    scanf("%d",&n);
    printf("\n");

    for (i=0;  i<n;  i++){
        scanf("%f", &arr[i]);
    }

    for (i=0;  i<n;  i++){
          sum=(float)sum+arr[i];
    }
    
    average=(float)sum/n;

    printf("\n\nThe average of all number is : %.2f\n", average);

    return 0;
}