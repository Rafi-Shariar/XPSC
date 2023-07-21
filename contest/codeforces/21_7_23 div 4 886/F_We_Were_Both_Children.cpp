#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){

    int t; cin>>t;

    while (t--)
    {
        int n; cin>>n;

        vector<ll>v;

        for (int i = 0; i < n; i++)
        {
            ll a; cin>>a;
            if(a>0 && a<=n) v.push_back(a);

        }

        sort(v.rbegin(),v.rend());

        ll mx =0;

        for (int i = 0; i < v.size(); i++)
        {
            ll val = v[i];
            ll c=0;
            for (int j = i; j < v.size(); j++)
            {
                if(val % v[j]==0) c++;
            }

            mx = max(c,mx);
            
        }

        cout<<mx<<endl;
        

        
        
    }
    


    return 0;
}