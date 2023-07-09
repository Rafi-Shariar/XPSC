#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){

   int a,b;
   cin>>a>>b;

   if(b%a==0) cout<<1<<endl;
   else{

    cout<<(b/a) + 1<<endl;
   }


    return 0;
}