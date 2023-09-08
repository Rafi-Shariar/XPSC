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
        ll sum = 0;
        ll i;

        for ( i = 1; i*i < n; i++)
        {
            if(n%i==0)sum+=i; //sum += i+n/i;
            
        }

        if(i*i == n) sum+=i;
        sum-=n;

         cout<<sum<<endl;
        
    }

    return 0;
}