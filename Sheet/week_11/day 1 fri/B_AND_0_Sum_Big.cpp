#include<bits/stdc++.h>
using namespace std;
#define ll long long int
const int mod = 1000000007;

ll fun(ll base , ll p){

    ll ans = 1;

    while (p)
    {
       if(p%2==1){
        ans = (ans*base)%mod;
        p--;
       }
       else
       {
        base = (base*base)%mod;
        p/=2;
       }
       
       
    }

    return ans%mod;
    
}
int main(){

    int t; cin>>t;

    while (t--)
    {
        ll n,k; cin>>n>>k;

        ll ans = fun(n,k);
        //  ans%=mod;

        cout<<ans<<endl;

    }
    


    return 0;
}