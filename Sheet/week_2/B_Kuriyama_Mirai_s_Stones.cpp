#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main(){

    int n; cin>>n;
    vector<ll>v;

    ll sum[n+1]={0};

    ll sorted_sum[n+1]={0};

    ll total = 0;

    for (int i = 0; i < n; i++)
    {
        ll a;cin>>a;
        v.push_back(a);
        total +=a;
        sum[i+1] = total;
    }

    vector<ll>sorted_v = v;
    sort(sorted_v.begin(),sorted_v.end());

    ll s=0;
    for (int i = 0; i < n; i++)
    {
        s+=sorted_v[i];
        sorted_sum[i+1] = s;
    }

    // for (int i = 0; i <= n; i++)
    // {
    //     cout<<i<<" "<<sum[i]<<endl;
    // }

    // cout<<endl<<"sorted:"<<endl;

    //   for (int i = 0; i <= n; i++)
    // {
    //     cout<<i<<" "<<sorted_sum[i]<<endl;
    // }

    
    

    int q; cin>>q;

    while (q--)
    {
        ll type,l,r;
        cin>>type>>l>>r;
        
        ll ans=0;

        if(type==1){

            ans = sum[r] - sum[l-1];
            
        }else
        {
            ans = sorted_sum[r] - sorted_sum[l-1];

        }

        cout<<ans<<endl;
        
    }
    


    

    


    return 0;
}