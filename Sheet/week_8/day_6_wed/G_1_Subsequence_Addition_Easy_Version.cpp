#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){

    int t; cin>>t;

    while (t--)
    {
        ll n; cin>>n;
        vector<ll>v(n);

        for(int i=0; i<n; i++) cin>>v[i];

        sort(v.begin(),v.end());

        if(v[0]!=1){
            cout<<"NO"<<endl;
            continue;
        }

        ll sum = v[0];

        for (int i = 1; i < n; i++)
        {
            if(v[i]<=sum) sum += v[i];
            else
            {
                sum = -1; break;
            }
            
        }

        if(sum == -1) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
        
    }
    


    return 0;
}