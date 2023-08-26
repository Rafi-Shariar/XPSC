#include<bits/stdc++.h>
using namespace std;
#define ll long long int
void fast(){
   ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
}

int main(){

    fast();

    int t; cin>>t;

    while (t--)
    {
        ll n; cin>>n;
        ll l=0, r=2e9;

        while (l<r-1)
        {
            ll mid = l + (r-l)/2;

            ll val = (mid*(mid-1) )/2;

            if(val > n) r = mid;
            else l = mid;
        }

        ll cur_val = (l * (l-1) ) /2;

        cout<<l + (n - cur_val)<<endl;
        
    }
       

    return 0;
}