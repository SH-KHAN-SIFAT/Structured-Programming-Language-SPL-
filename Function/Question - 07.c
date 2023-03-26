/*Q-7: Function to calculate the sum of n numbers coming from the console and stored in an array.
sample Intputs -         (3)  80 33 27                   (2)  100 -100
sample output  -         (2)    140                               0                     */



#include<stdio.h>

int Sum(int a[] , int size);

int main(){

    int array[50],n;

    printf("Please enter the size of the array :\n");
    scanf("%d",&n);

    printf("Please enter the inputs of the array :\n");
    for(int i=0;  i<n;  i++){
        scanf("%d",&array[i]);
    }

    printf("The sum of all numbers of the array is :%d\n",Sum(array , n));

    return 0;

}

int Sum(int a[] , int size){

    int sum=0;

    for(int i=0;  i<size;  i++){
        sum+=a[i];
    }

    return sum;

}
