/*Q-2 : Write a program in C to concatenate two strings without using any library function.
“My name ”
“is andy”                           "My name is andy"
“123abc”
“*A*B”                              "123abc*A*B"                    */


----------------------------------------------[ without using any library function ]----------------------------------------------------------------------------

#include<stdio.h>
#include<string.h>


int main(){

    char a[50];
    char b[50];

    printf("Please enter the first string\n\n");
    gets(a);
    printf("\nPlease enter the second string\n\n");
    gets(b);

    int i,j;

    for(i=0;  a[i]!='\0';  i++);

    for(j=0;  b[j]!='\0';  i++,j++){
        a[i]=b[j];
    }

    a[i]='\0';

    printf("\n\nThe concatenate string is : %s\n",a);

    return 0;
}

----------------------------------------------[ with using any library function ]----------------------------------------------------------------------------

#include<stdio.h>
#include<string.h>


int main(){

    char a[50];
    char b[50];

    printf("Please enter the first string\n\n");
    gets(a);
    printf("\nPlease enter the second string\n\n");
    gets(b);

    strcat(a,b);

    printf("\n\nThe concatenate string is : %s\n",a);

    return 0;
}
