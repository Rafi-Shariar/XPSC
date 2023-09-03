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
        ll n; cin>>n;

        ll arr[]={0,1,2,3,5,6,7,8,9};
        ll ans = 0;
        ll cur_dig=1;

        while (n>0)
        {
            ans += arr[n%9] * cur_dig;
            n = n/9;
            cur_dig *=10;
        }

        cout<<ans<<endl;
        

    }

    return 0;
}