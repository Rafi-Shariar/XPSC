#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){

    int t; cin>>t;

    while (t--)
    {
        ll n; cin>>n;

        ll sum = (n*(n+1))/2;

        if(sum%n==0){

            for (int i = 1; i <= n; i++) cout<<i<<" ";
            cout<<endl;
   
        }
        else
        {
            for (int i = 1; i <= n; i++) cout<<i*2<<" ";
            cout<<endl;
        }
        
    }
    


    return 0;
}