#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){

    int t; cin>>t;

    while (t--)
    {
        int n; cin>>n;

        vector<ll>freq(10000000,0);
        ll mx = INT_MIN;

        for (int i = 0; i < n; i++)
        {
            ll a; cin>>a;

            freq [a]++;

            mx = max(mx,freq[a]);
        }

        cout<<n-mx<<endl;
        
    }
    


    return 0;
}