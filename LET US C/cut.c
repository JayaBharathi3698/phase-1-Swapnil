#include<stdio.h>
#include<stdlib.h>
#include<string.h>
char cut(int n, char arr[11])
{
    printf("%s\n",arr);
    arr[11-n-1]='\0';
    printf("%s",arr);
}
void main()
{
    char arr[11]="helloworld";
    cut(3, arr);  
}