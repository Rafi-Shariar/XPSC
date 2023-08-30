#include<bits/stdc++.h>
using namespace std;
#define ll long long int
void fast(){
   ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
}

ll numberofDivisor( ll n){
    map<ll,int>mp;
    while( n%2==0){
        mp[2]++;
        n/=2;
    }

    for (ll i = 3; i <= sqrt(n); i+=2)
    {
        while( n % i == 0){
            mp[i]++;
            n/=i;
        }
    }

    if(n>2) mp[n]++;

    ll ans = 1;
    for( auto i : mp){
        ans *= (i.second + 1);
    }

    return ans;

}

int main(){

    fast();

    int t; cin>>t;

    while (t--)
    {
        ll l,r;
        cin>>l>>r;

        ll val = 0;
        ll divs = 0;

        for (ll i = l; i <= r; i++)
        {
            ll cur = numberofDivisor(i);

            if(cur > divs){
                divs = cur;
                val = i;
            }
        }

        printf("Between %lld and %lld, %lld has a maximum of %lld divisors.\n", l,r,val,divs);
        
    }
       

    return 0;
}