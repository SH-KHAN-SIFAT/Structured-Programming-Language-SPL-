/*Q-14: Function to determine only even numbers in an array of input integers.
sample Input -            24 77 117 -512 1024               45 33 0 256
sample output  -             24 -512 1024                      0 256        */


#include<stdio.h>

int even_number(int array[] , int size);

int main(){

    int a[50],n;

    printf("Please enter the size of the array :\n");
    scanf("%d",&n);

    printf("Please enter the inputs of the array :\n\n");
    for(int i=0;  i<n;  i++){
        scanf("%d",&a[i]);
    }

    printf("\nEven numbers in the array are :");
    even_number(a , n);

    return 0;

}

int even_number(int array[] , int size){

    for(int i=0;  i<size;  i++){
        if(array[i]%2==0){
            printf("%d\t",array[i]);
        }

    }

    return 0;
}

