#include<bits/stdc++.h>
using namespace std;
#define ll long long int
void fast(){
   ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
}

int main(){

    fast();

   int n; cin>>n;

   if(n%2==0){

    cout<<n/2<<endl;
    for(int i=1; i<=n/2; i++) cout<<2<<" ";
    cout<<endl;
   }
   else
   {
    cout<<((n-3)/2)+1<<endl;
    for(int i=1; i<=((n-3)/2); i++) cout<<2<<" ";
    cout<<3<<endl;
   }
   
       

    return 0;
}