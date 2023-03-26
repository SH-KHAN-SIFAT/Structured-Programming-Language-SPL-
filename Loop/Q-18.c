
/*Q-18 : WAP that will determine whether an integer is palindrome number or not.

9                               YES
10                              NO
12321                           YES                 */


#include<stdio.h>

int main(){

    int x,a,i;
    int rem=0;

    printf("Please enter the value of x : \n");
    scanf("%d",&x);

    for(i=x; x!=0; x=x/10){
        a=x%10;
        rem=(rem*10)+a;
    }
    
    if(i==rem){
        printf("The number is palindrome\n");
    }
    else{
        printf("The number is not palindrome\n");
    }

    return 0;
}


