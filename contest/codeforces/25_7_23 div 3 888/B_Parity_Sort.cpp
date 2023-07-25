#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){

    int t; cin>>t;

    while (t--)
    {
        int n; cin>>n;

        // int mn = INT_MAX;
        vector<int>v(n);

        for (int i = 0; i < n; i++) cin>>v[i];

        vector<int>v2(n);
        for (int i = 0; i < n; i++) v2[i]=v[i];

        sort(v2.begin(),v2.end());

        bool pos = true;

        for (int i = 0; i < n; i++)
        {
            if(v[i]%2==0 && v2[i]%2!=0) pos = false;
            else if( v[i]%2!=0 && v2[i]%2==0) pos = false;

        }

        if(pos) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
        


        
    }
    


    return 0;
}