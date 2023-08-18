#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){

    int t; cin>>t;

    while (t--)
    {
        int n,h;
        cin>>n>>h;
        vector<int>v(n);

        for(int i=0; i<n; i++) cin>>v[i];

        sort(v.rbegin(),v.rend());

        int c=0;
        int idx = 0;

        while (h>0)
        {
            h -= v[idx];
            //cout<<v[idx]<<"--> "<<h<<endl;
            c++;
            if(idx == 0) idx = 1;
            else idx = 0;
        }
        
        cout<<c<<endl;
    }
    


    return 0;
}