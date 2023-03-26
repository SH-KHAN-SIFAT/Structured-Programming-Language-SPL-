
/*Q-22 & 23 : Function find_substr( ) that takes two string arrays (a, b) as parameters, returns 1 if string b is found anywhere in
string a, or returns 0 if no match is found.(Assuming, strlen(a)>strlen(b))
Sample input (a, b)                         Sample output
madam adam                                        1
telescope less                                    0                             */


#include<stdio.h>
#include<string.h>

int find_substr(char str1[] , char str2[]);

int main(){

    char x[100],y[100];

    gets(x);
    gets(y);

    printf("\n%d\n\n",find_substr(x ,y));

    return 0;

}

int find_substr(char str1[] , char str2[]){

    int count=0;

    for(int i=0;  str1[i]!='\0';  i++){
        count=0;
        if(str1[i]==str2[0]){
            for(int j=0;  j<strlen(str2);  j++){
                if(str1[j]==str2[i+j]){
                    count++;
                }
            }
        }
        if(count==strlen(str2)){
            return 1;
        }
        if(count!=strlen(str2)){
            return 0;
        }
    }
}

