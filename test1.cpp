#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
 
    int t; cin>>t;
 
    while (t--)
    {
        ll n,k; cin>>n>>k;
 
        vector<ll>steps(n);
        vector<ll>legs(k);
 
        for(int i=0; i<n; i++) cin>>steps[i];
        for(int i=0; i<k; i++) cin>>legs[i];
 
        vector<ll>ans;
 
        for (int i = 0; i < k; i++)
        {
            ll sum = 0;
            ll cur_leg = legs[i];
            ll idx=0;
 
            while (cur_leg>=steps[idx])
            {
                sum += steps[idx];
                idx++;

                if(idx>=n){
                    break;
                }

               
            }
 
            ans.push_back(sum);
            
 
        }
 
        for(auto i : ans) cout<<i<<" ";
        cout<<endl;
        
    }
    
 
 
    return 0;
}