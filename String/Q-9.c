/*Q-9 :  Write a program in C to count the occurrences of a character in a string regardless of its case.
"My name is Andy"----(a)                              2
"WELCOME to CSE, everyone"-----(E)                    6                            */

#include<stdio.h>
#include<string.h>


int main(){

    char a[50];
    char x;

    printf("Please enter the input of the string : \n\n");
    gets(a);

    printf("Please enter the character you want to count the occurances in the string : \n\n");
    x=getchar();

    int i,count=0;

    for(i=0;  a[i]!='\0';  i++){
        if(a[i]==x){
           count++;
        }
    }

    printf("\n\nThe total number of occurances of character in the string is : %d",count);

    return 0;
}
