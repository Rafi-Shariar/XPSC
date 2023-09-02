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
        vector<int>v;

        int now=1;

        while (now<=n)
        {
            v.push_back(now);
            now*=2;
        }

        if(v.back()!=n){

            int dif = n -  v.back();

            for( int i=30; i>=0; i--){

                if( dif & (1<<i)) v.push_back( v.back() + (i<<1));
            }
        }

        reverse(v.begin(), v.end());

        cout<<v.size()<<endl;
        for( auto i : v ) cout<<i<<" ";
        cout<<endl;
        
    }

    return 0;
}