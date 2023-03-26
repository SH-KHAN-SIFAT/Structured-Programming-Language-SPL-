/*Q-20: Function “GenNthPrime()” to compute the Nth prime number, where N is an integer input.
sample Input -              5                          10                          40
sample output  -      5th Prime: 11              10th Prime: 29              40th Prime: 173        */



#include<stdio.h>

int Get_Nth_Prime_number(int N);

int main(){

    int n;

    printf("Please enter the value of n : \n");
    scanf("%d",&n);

    printf("\nNth prime number is : %d\n",Get_Nth_Prime_number(n));

    return 0;

}

int Get_Nth_Prime_number(int N){

    int flag,count=0;

    for(int i=2;  i>0;  i++){
        flag=0;
        for(int j=2;  j<i;  j++){
            if(i%j==0){
                flag=1;
                break;
            }
        }
        if(flag==0){
            count++;
        }
        if(count==N){
            return i;
            break;
        }
    }

    return 0;
}
