/*Q-1 : Write a program in C to find the length of a string with & without using any library function.
“My name is andy”               15
“Abc 123 7&*&*”                 13          */


----------------------------------------------[ with using any library function ]----------------------------------------------------------------------------

#include<stdio.h>
#include<string.h>


int main(){

    char a[50];

    printf("Please enter the string\n\n");
    gets(a);

    int size=strlen(a);

    printf("\nThe length of the string is : %d\n",size);

    return 0;
}

----------------------------------------------[ without using any library function ]----------------------------------------------------------------------------

#include<stdio.h>
#include<string.h>


int main(){

    char a[50];

    printf("Please enter the string\n\n");
    gets(a);

    int i,count=0;

    for(i=0;  a[i]!='\0';  i++){
        count++;
    }

    printf("\nThe length of the string is : %d\n",count);

    return 0;
}
