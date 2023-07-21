#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){

    int t; cin>>t;

    while (t--)
    {
        ll n,k;
        cin>>n>>k;

        vector<ll>v(n);

        for(ll i=0; i<n; i++) cin>>v[i];

        sort(v.begin(),v.end());

        // for(auto i : v) cout<<i<<" ";


        ll mx = INT_MIN;

        for (ll i = 0; i < n; i++)
        {
            ll c=1;
            for (ll j = i; j < n-1; j++)
            {
                if( abs( v[j] - v[j+1]) <= k ) c++;
                else break;
            }

            // cout<<c<<" ";

            mx = max(mx,c);
            
        }
  

        cout<<n-mx<<endl;
        
        
    }
    


    return 0;
}