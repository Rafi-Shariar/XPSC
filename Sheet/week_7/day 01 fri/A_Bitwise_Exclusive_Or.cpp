#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){

   int a,b;
   cin>>a>>b;

   for (int i = 1; i <= 255; i++)
   {
     if( (a^i)==b){
        cout<<i<<endl;
        break;
     }
   }
   
    


    return 0;
}