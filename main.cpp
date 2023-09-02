#include<stdio.h>
#include<string.h>
int main(){

    char str[100];
    gets(str);

    int upper=0;

    for (int i = 0; str[i] != '\0'; i++)
    {
        if(str[i]>='A' && str[i]<='Z') upper++;
    }

    printf("%d",upper);
    




}