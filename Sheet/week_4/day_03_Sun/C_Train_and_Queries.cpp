#include<bits/stdc++.h>
using namespace std;
#define ll long long int
//https://codeforces.com/contest/1702/problem/C
int main(){

    int t; cin>>t;

    while (t--)
    {
        int n,q;
        cin>>n>>q;

        map<int,vector<int>>mp;

        for (int i = 1; i <= n; i++)
        {
            int a; cin>>a;
            mp[a].push_back(i);
        }

        while (q--)
        {
            int a,b;
            cin>>a>>b;

            if(mp[a].empty() || mp[b].empty()) cout<<"NO"<<endl;
            else if( a==b) cout<<"YES"<<endl;
            else if( mp[a].front() < mp[b].back()) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
        
        
    }
    


    return 0;
}