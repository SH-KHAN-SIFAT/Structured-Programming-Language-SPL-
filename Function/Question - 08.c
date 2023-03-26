/*Q-8: Function that takes an array of n integer numbers as input and prints them in reverse order.
sample Intputs -         (3)  80 33 27                   (2)  100 -100
sample output  -         (3)  27 33 80                   (2)   -100 100                    */



#include<stdio.h>

int reverse_of_array(int a[] , int size);

int main(){

    int array[50],n;

    printf("Please enter the size of the array :\n");
    scanf("%d",&n);

    printf("Please enter the inputs of the array :\n");
    for(int i=0;  i<n;  i++){
        scanf("%d",&array[i]);
    }

    printf("\nThe array in reverse order is : ");
    reverse_of_array(array , n);

    return 0;

}

int reverse_of_array(int a[] , int size){

    for(int i=size-1;  i>=0;  i--){
        printf("%d\t",a[i]);
    }

    return a;

}
