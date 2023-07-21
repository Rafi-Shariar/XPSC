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

        ll i=0;
        ll mx = 0;

        while (i<n)
        {
            ll j = i+1;

            while (j<n)
            {
                if(v[j] - v[j-1] > k){
                    break;
                }

                j++;
            }

            ll tt = j - i;
            mx = max(mx,tt);
            i=j;
            
        }

        cout<<n-mx<<endl;
        

            
        
  

     
        
        
    }
    


    return 0;
}