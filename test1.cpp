#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){

    int a,b;
   cin>>a>>b;

   int c=0, has=1;

   while (has < b)
   {
     c++;
     has--;
     has += a;
   }

   cout<<c<<endl;
   
    


    return 0;
}