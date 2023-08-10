#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){

    int t; cin>>t;

    while (t--)
    {
        int n; cin>>n;
        int sz = (n*(n-1))/2;

        vector<int>v(sz);

        for (int i = 0; i < sz; i++)
        {
            cin>>v[i];
        }

        sort(v.begin(),v.end());

        for (int i = 0; i < sz; i+= --n)
        {
            cout<<v[i]<<" ";
        }

        cout<<1000000000<<endl;
        
        
    }
    


    return 0;
}