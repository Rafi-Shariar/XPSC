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

ll fun(vector<int>&v){

      ll ans=0,zeros=0;

        for (int i = v.size()-1; i >= 0; i--)
        {
            if(v[i]==0) zeros++;
            else ans += zeros;
        }

        return ans;


}
int main()
{
    fast();

    int t=1;
    cin>>t;

    while(t--)
    {
        int n; cin>>n;
        vector<int>v(n);
        for( int i=0; i<n; i++) cin>>v[i];

        ll cur = fun(v);

      

        for (int i = 0; i < n; i++)
        {
            if(v[i]==0){

                v[i]=1;
                cur = max(cur, fun(v));
                v[i]=0;
                break;
            }
        }


        for (int i = n-1; i >= 0; i--)
        {
            if(v[i]==1){
                v[i]=0;
                cur = max(cur, fun(v));
                v[i]=1;
                break;
            }
        }

        cout<<cur<<endl;
        
        
        
    }

    return 0;
}