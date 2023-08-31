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
        int n; cin>>n;
        vector<int>v(n+2);
        for(int i=1; i<=n; i++) cin>>v[i];

        int c=0;

        for (int i = 2; i <= n; i++)
        {
            int l = i+i-1;
            
            if(v[i]>l) continue;

            int x = (l % v[i]+1);
            int y = i-x;

            while (y>=1)
            {
                if( v[i]*v[y] == y+i) c++;
                y-=v[i];
            }
            

                
        }

        cout<<c<<endl;
        
    }

    return 0;
}