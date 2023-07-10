#include<stdio.h>
int main (){
 
    int n,k;
    scanf("%d %d", &n, &k);
 
    int temp;
    temp = n;
 
    for (int i = 1; i <=k; i++)
    {
        if (temp%10==0)
        {
            temp=temp/10;
        }
        else
        {
            temp=temp-1;
        }
        
        
    }
    printf("%d ", temp);
    
 
 
    return 0;
}