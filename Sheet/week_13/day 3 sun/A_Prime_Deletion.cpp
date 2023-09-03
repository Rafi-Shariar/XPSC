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
        string s; cin>>s;
        int one=0,seven=0;

        for (int i = 0; i < s.size(); i++)
        {
            if(s[i]=='1') one = i;
            if(s[i]=='7') seven = i;
        }

        if(one < seven) cout<<17<<endl;
        else cout<<71<<endl;
        
    }

    return 0;
}