#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){

    int t; cin>>t;

    while (t--)
    {
        int n; cin>>n;
        vector<int>v(n);

        for(int i=0; i<n; i++ ) cin>>v[i];

        sort(v.begin(),v.end());

        bool ok = true;

        for (int i = 0; i < n-1; i++)
        {
            int f = v[i];
            int s = v[i+1];

            if( abs(f-s)<=1) continue;
            else ok = false;
        }
        

        if(ok) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    


    return 0;
}