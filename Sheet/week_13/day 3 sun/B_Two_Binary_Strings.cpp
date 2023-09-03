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
        string a,b;
        cin>>a>>b;

        if(a==b){
            cout<<"YES"<<endl;
            continue;
        }

        int zero=-1, one=-1;

        int i=0;
        bool pos = false;

        while (i<a.size()-1)
        {
            if(a[i]=='0' && b[i]=='0'){
                
                if(a[i+1]=='1' && b[i+1]=='1') pos = true;
       
            }
            i++;
        }

    
        if(pos) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
        
        
        
    }

    return 0;
}