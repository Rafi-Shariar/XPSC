#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){

   ll l,w,t;
   cin>>l>>w>>t;

   ll ans = 0;

   while (l>0)
   {
     l -= t;
     ans++;
   }

   w = w - t;

   ll x = 0;

   while (w>0)
   {
     w -= t;
     x++;
   }

   ll total = ans + (ans*x);
   cout<<total<<endl;
   
   
   


    return 0;
}