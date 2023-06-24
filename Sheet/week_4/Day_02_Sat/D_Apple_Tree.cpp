#include<bits/stdc++.h>
using namespace std;
#define ll long long int

const int Mx = 1e5;
vector<ll>v[Mx];
ll leaf[Mx];
bool visited[Mx];

ll dfs(ll src){

    visited[src] = true;
    ll ans = 0;
    bool l = true;

    for (ll i = 0; i < v[src].size(); i++)
    {
        if(!visited[v[src][i]]){

            l = false;
            ans += dfs(v[src][i]);
        }
    }

    if(l) return leaf[src] = 1;
    else return leaf[src] = ans;
    
}

int main(){

    int t; cin>>t;

    while (t--)
    {
        ll n; cin>>n;

        ll e = n-1;

        memset(visited, false, sizeof(visited));
        memset(leaf,0,sizeof(leaf));

        while (e--)
        {
            ll a,b;
            cin>>a>>b;

            v[a].push_back(b);
            v[b].push_back(a);
   
        }

        dfs(1);

        ll q; cin>>q;

        while (q--)
        {
            ll x,y; cin>>x>>y;

            cout<<leaf[x] * leaf[y]<<endl;
        }

        for (int i = 1; i <= n; i++)
        {
            v[i].clear();
        }
           
    }
    


    return 0;
}