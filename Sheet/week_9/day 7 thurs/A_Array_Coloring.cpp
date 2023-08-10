#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){

    int t; cin>>t;

    while (t--)
    {
        int n; cin>>n;
        vector<int>v(n);
        int od=0,ev=0;

        for (int i = 0; i < n; i++)
        {
            cin>>v[i];

            if(v[i] & 1) od++;
            else ev++;
        }

        if(od%2==0) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
        
    }
    


    return 0;
}