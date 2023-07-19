#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){

    int t; cin>>t;

    while (t--)
    {
        int n,p,x;
        cin>>n>>p>>x;

        int extra = x/30;

        n = n+extra;

        if(n%p==0) cout<<n/p<<endl;
        else cout<<(n/p)+1<<endl;
    }
    


    return 0;
}