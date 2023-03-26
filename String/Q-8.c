
/*Q-8 :  Write a program in C to sort a string array in alphabetic order.
"My name is Andy"                              AMadeimnnsyy
"Abc 123 7&*&*"                                &&**1237Abc                       */

#include<stdio.h>
#include<string.h>


#include <stdio.h>
#include <string.h>

int main()
{
  char str[100],ch;
  int i,j,l;

  printf("Input the string : ");
  gets(str);
  l=strlen(str);

  for(i=1;i<l;i++){
    for(j=0;j<l-i;j++){
        if(str[j]>str[j+1]){
            ch=str[j];
            str[j] = str[j+1];
            str[j+1]=ch;
        }
     }
  }

   printf("After sorting the string appears like : \n");
   printf("%s\n\n",str);

   return 0;

  }