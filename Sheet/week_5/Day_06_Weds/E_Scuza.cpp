#include<bits/stdc++.h>
using namespace std;
#define ll long long int
//https://codeforces.com/contest/1742/problem/E
int main(){
 
    int t; cin>>t;
 
    while (t--)
    {
        int n,q; cin>>n>>q;

        vector<ll>a(n+1,0);

        for(int i=1; i<=n; i++ ) cin>>a[i];

        vector<ll>pref(n+2,0);

        for(int i=1; i<=n; i++) pref[i] = (a[i] + pref[i-1]);

        vector<ll>ans(q);
        
        vector<pair<ll,int>>k(q);

        for (int i = 0; i < q; i++)
        {
            cin>>k[i].first;
            k[i].second = i;

        }

        sort(k.begin(),k.end());

        int sum=0;

        for (int i = 0; i < q; i++)
        {
            while (true)
            {
                if(sum==n || a[sum+1]>k[i].first)break;
                sum++;
            }

            ans[k[i].second] = pref[sum];
            
        }

        for(auto i : ans) cout<<i<<" ";
        cout<<endl;
        
        

        
    }
    
 
 
    return 0;
}