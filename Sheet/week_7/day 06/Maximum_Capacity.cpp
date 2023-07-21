#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){

    int t; cin>>t;

    while (t--)
    {
        ll n,w;
        cin>>n>>w;

        ll ww = w*n;

        if( n <=8 && ww<=500) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;

    }
    


    return 0;
}