#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){

    int t; cin>>t;

    while (t--)
    {
         int n; cin>>n;

         if(n & 1) cout<<-1<<endl;
         else
         {
            for(int i=n; i>=1; i--) cout<<i<<" ";
            cout<<endl;
         }
         
    }
    


    return 0;
}