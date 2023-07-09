#include<bits/stdc++.h>
using namespace std;
#define ll long long int

ll dif(ll n){

    ll low = INT_MAX;
    ll high = INT_MIN;

    while (n!=0)
    {
        ll tmp = n%10;
        low = min(low,tmp);
        high = max(high,tmp);
        n/=10;
    }

    return high - low;
    
}
int main(){

    int t; cin>>t;

    while (t--)
    {
        ll a,b; cin>>a>>b;

        ll val = 0;
        ll tmp = INT_MIN;

        for (ll i = max(a,b-100); i <=b; i++)
        {
            ll ans = dif(i);

            if(ans>tmp){
                tmp = ans;
                val = i;
            }

        }

        cout<<val<<endl;

  
        
    }
    


    return 0;
}