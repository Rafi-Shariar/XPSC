#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){

    int t; cin>>t;

    while (t--)
    {
        int n,q;
        cin>>n>>q;

        vector<ll>v(n+1);
        ll pre = 0,suf=0;
        map<int,int>p,s;

        for(int i=1; i<=n; i++){
            cin>>v[i];
            pre += v[i];
            p[i] = pre;
        }

        int idx = 1;

        for(int i=n; i>=1; i--){
            suf += v[i];
            s[i] = suf;
            idx++;
        }

        // for (int i = 1; i <=5; i++)
        // {
        //     cout<<p[i]<<" ";
        // }
        // cout<<endl;
        // for (int i = 1; i <=5; i++)
        // {
        //     cout<<s[i]<<" ";
        // }
        // cout<<endl;
        
        
        
        while (q--)
        {
            ll l,r,k;
            cin>>l>>r>>k;

            int i = l -1;
            int j = r + 1;

            ll x,y;

            if(i==0) x = 0;
            else x = p[i];

            if(j>n) y = 0;
            else y = s[j];

            // cout<<x<<" "<<y<<endl;

            ll term = r - l + 1;

            ll ans = x + y + ( term * k);

            if( ans %2==1) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;




          
        }
        
    }
    


    return 0;
}