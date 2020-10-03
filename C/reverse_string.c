/*A C program to take a string as input and reverse it*/
#include<stdio.h>
#include<string.h>

void main(){
    char str[20];
    int len,l,i=0;
    char temp=0;
    printf("Enter the String : ");
    gets(str);
    printf("The original string is %s\n", str);
    len =strlen(str);
    l=len/2;
    for(i=0;i<l;i++)
    {
            temp=str[i];
             str[i]=str[len-1-i];
             str[len-1-i]=temp;

    }
    printf("The reverse String is ");
    puts(str);
}

