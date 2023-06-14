#include<stdio.h>

int fac(int n){

    if(n==1) return 1;

    return n * fac(n-1);

}


int main(){

   int n;
   scanf("%d",&n); 

   int ans = fac(n);

   printf("%d\n",ans);
    return 0;
}