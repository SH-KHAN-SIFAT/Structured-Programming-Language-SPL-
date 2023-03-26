
/*Q-10 :  Write a program in C to check whether a string is a palindrome or not
"My name is Andy"                           No
"madam"                                     Yes           */

#include<stdio.h>
#include<string.h>


int main(){

    char a[50];

    printf("Please enter the input of the string : \n\n");
    gets(a);

    int length=strlen(a);

    int i,count;

    for(i=0;  i<length;  i++){
        if(a[i]!=a[length-i-1]){
           count=1;
           break;
        }
    }

    if(count==1){
        printf("\nThe string is not palindrome \n");
    }
    else{
        printf("\nThe string is palindrome \n");
    }

    return 0;
}
