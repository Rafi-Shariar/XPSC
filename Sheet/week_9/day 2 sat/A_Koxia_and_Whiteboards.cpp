#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){

    int t; cin>>t;

    while (t--)
    {
        int n,k;
        cin>>n>>k;
        vector<ll>v(n+k);

        for(int i=0; i< n+k; i++) cin>>v[i];

        sort(v.begin(),v.end()-1);
        reverse(v.begin(),v.end());

        ll sum = 0;

        for(int i=0; i<n; i++) sum += v[i];

        cout<<sum<<endl; 


        
        

    }
    


    return 0;
}