#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int,int> pii;
#ifdef LOKAL
#include "DEBUG_TEMPLATE.h"
#else
#define HERE
#define debug(args...)
#endif


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
int main()
{
    fast();

    int t=1;
    cin>>t;

    while(t--)
    {
        ll a,b;
        cin>>a>>b;

        int ans = INT_MIN;
        ll val;

        for (ll i = a; i <= b; i++)
        {
            int cur = numberofDivisor(i);
            if(cur> ans){
                val = i;
                ans = cur;
            }
        }

        printf("Between %lld and %lld, %lld has a maximum of %d divisors.\n",a,b,val,ans);
        
    }

    return 0;
}