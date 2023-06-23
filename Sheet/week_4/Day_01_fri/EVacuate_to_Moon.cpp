#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){

    int t; cin>>t;

    while (t--)
    {
        ll n,m,h;
        cin>>n>>m>>h;

        ll cars[n] , station[m];

        for(ll i = 0; i<n; i++) cin>>cars[i];

        for(ll i = 0; i<m; i++) cin>>station[i];

        sort(cars, cars+n, greater<ll>());
        sort(station, station+m, greater<ll>());

        ll ans = 0;

        for (ll i = 0, j=0; i <n && j<m; i++,j++)
        {
            if((station[j] * h) > cars[i] ) ans += cars[i];
            else ans += ( station[j]*h);
        }

        cout<<ans<<endl;
        
        
    }
    


    return 0;
}