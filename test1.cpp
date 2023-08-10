#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){

   double a,b;

   while (cin>>a>>b)
   {
     double ans = ((b-a)/a ) * 100;

     printf("%.2lf%%\n",ans);
   }
   
    


    return 0;
}