#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int,int> pii;
#ifdef LOKAL
#include "DEBUG_TEMPLATE.h"
#else
#define HERE
#define debug(args...)
#endif


void fast(){
   ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
}
int main()
{
    fast();

    int t=1;
    cin>>t;

    while(t--)
    {
        int n,k; cin>>n>>k;
        k%=(n+1);
        vector<int>v(n);
        vector<bool>vis(n+1);

        for (int i = 0; i < n; i++)
        {
            cin>>v[i];
            vis[v[i]]=1;
        }

        int cur = -1;

        for (int i = 0; i <= n; i++)
        {
            if(vis[i]==0) cur = i;
        }

        deque<int>dq(v.begin(),v.end());

        for (int i = 0; i < k; i++)
        {
            int val = cur;
            dq.push_front(val);
            cur = dq.back();
            dq.pop_back();
        }

        for (int i = 0; i < dq.size(); i++)
        {
           cout<<dq[i]<<" ";
        }
        cout<<endl;
        
        
        
        
    }

    return 0;
}