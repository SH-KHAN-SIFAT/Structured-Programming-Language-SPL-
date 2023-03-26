
/*Q-4 : Write a program in C to count the number of words in a string.
"My name is Andy"                             4
"Abc  123  7&*&"                              3                    */

#include<stdio.h>
#include<string.h>


int main(){

    char a[50];

    printf("Please enter the string ending up with fullstop(.) : \n\n");
    gets(a);

    int i,count=0;

    for(i=0;  a[i]!='\0';  i++){
        if(a[i]==' ' || a[i]=='.'){
            count++;
        }
    }

    printf("\n\nThe total number of words in the string are : %d\n",count);

    return 0;
}
