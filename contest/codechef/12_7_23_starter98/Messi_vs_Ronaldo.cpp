#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){

   int a,b,c,d;
   cin>>a>>b>>c>>d;

   int messi = (a*2) + b;
   int ron = (c*2) + d;

   if(messi==ron) cout<<"Equal"<<endl;
   else if( messi>ron) cout<<"Messi"<<endl;
   else cout<<"Ronaldo"<<endl;
    


    return 0;
}