#include<bits/stdc++.h>
using namespace std;
#define ll long long int
//https://codeforces.com/contest/1833/problem/B
int main(){

    int t; cin>>t;

    while (t--)
    {
        int n,k;
        cin>>n>>k;

        vector<pair<int,int>>a(n);

        for (int i = 0; i < n; i++)
        {
            cin>>a[i].first;
            a[i].second = i;
        }

        sort(a.begin(),a.end());

        vector<int>b(n);

        for(int i=0; i<n; i++) cin>>b[i];

        sort(b.begin(),b.end());

        vector<int>v(n);

        for (int i = 0; i < n; i++)
        {
            v[a[i].second] = b[i];
            
        }

        for (int i = 0; i < n; i++)
        {
            cout<<v[i]<<" ";
        }
        cout<<endl;
        

        
        

        
    }
    


    return 0;
}