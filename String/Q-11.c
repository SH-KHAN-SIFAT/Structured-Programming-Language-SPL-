
/*Q-11 :  Write a program in C to add the digits in a string
"I am 20 years old"                         2
"“Abc 123 7&*&*"                            13           */

#include<stdio.h>
#include<string.h>


int main(){

    char a[50];

    printf("Please enter the input of the string : \n\n");
    gets(a);

    int i,sum=0;

    for(i=0;  a[i]!='\0';  i++){
        if(a[i]>='0'  &&  a[i]<='9'){
           sum+=a[i]-'0';
        }
    }

    printf("\nThe sum of the digits presented in the string is : %d\n",sum);

    return 0;
}
