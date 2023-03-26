/*Q-5 : Write a program in C to find the reverse of a string.
"My name is Andy"                              ydnA si eman yM
"Abc  123  7&*&*"                              *&*&7 321 cbA                   */

#include<stdio.h>
#include<string.h>


int main(){

    char a[50];

    printf("Please enter the string : \n\n");
    gets(a);

    strrev(a);

    printf("\n\nThe string in reverse order : %s",a);

    return 0;
}