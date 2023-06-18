#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){

    ll a,b;
    cin>>a>>b;

    ll ans = a;

    // if(a==b) cout<<a;

    // else
    // {
        
    
    

    for (ll i = a+1; i <=b; i++)
    {
      ans ^= i;
    }

    cout<<ans<<endl;

    // }

    
    


    return 0;
};