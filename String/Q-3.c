
/*Q-3 : Write a program in C to count how many vowels are there in a string
"My name is Andy"                           4
"Are you READY yet?"                        7                           */




#include<stdio.h>
#include<string.h>


int main(){

    char a[50];

    printf("Please enter the string\n\n");
    gets(a);

    int i,count=0;

    for(i=0;  a[i]!='\0';  i++){
        if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u'||a[i]=='A'||a[i]=='E'||a[i]=='I'||a[i]=='O'||a[i]=='U'){
            count++;
        }
    }

    printf("\n\nThe total number of vowels in the string are : %d\n",count);

    return 0;
}
