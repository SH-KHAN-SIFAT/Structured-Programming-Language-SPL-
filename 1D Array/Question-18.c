/*Q-18 : WAP that will take n integers into an array A. Now remove all duplicates numbers from that array. Finally print all 
elements from that array.
(8)              2 8 1 3 2 6 4 3                2 8 1 3 6 4
(3)              3 3 3                          3
(4)              6 7 8 9                        6 7 8 9                         */




#include<stdio.h>

int main(){

    int a[10],i,j,k,n;

    printf("\nEnter the size of the array size : ");
    scanf("%d",&n);

    printf("\nEnter elements of the array :");
    for(i=0;i< n;i++){
        scanf("%d",&a[i]);
    }

    printf("\nOriginal array is : ");
    for(i=0;i< n;i++){
        printf(" %d",a[i]);
    }

    printf("\nNew array is  : ");
    for(i=0;i< n;i++){
            
        for(j=i+1;j< n;){
            
            if(a[j]==a[i]){
                
                for(k=j;k< n;k++)
                    a[k]=a[k+1];
                    n--;
            }
            else
                j++;
        }
    }

    for(i=0;i< n;i++)
        printf("%d ",a[i]);


    return 0;
}