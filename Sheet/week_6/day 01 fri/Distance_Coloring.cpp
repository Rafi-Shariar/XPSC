#include<bits/stdc++.h>
using namespace std;
#define ll long long int
const int M = 1e9+7;
int main(){

    int t; cin>>t;


    while (t--)
    {
        int n,k; cin>>n>>k;

        ll ans=1;

        for (int i = 0; i < n; i++)
        {
            ans = (ans*k)%M;

            if(k>1) k--;
        }
        

        cout<<ans<<endl;
        

        
        
    }
    


    return 0;
}