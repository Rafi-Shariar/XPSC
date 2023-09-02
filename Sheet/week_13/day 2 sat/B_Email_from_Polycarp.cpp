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

        int n1=a.size(), n2=b.size();

        int i=1,j=1,c=0;
        bool ok=true;

        if(a[0] != b[0]) cout<<"NO"<<endl;
        else{
            c++;
            while(i<n1 && j<n2){

                if(a[i] == b[j]){
                    c++;
                    i++;
                    j++;
                }
                else{
                    if(b[j] == b[j-1]) j++;
                    else{
                        ok=false;
                        break;
                    }
                }
            }
            while(j<n2){

                if(b[j] == b[j-1]) j++;
                else{
                    ok=false;
                    break;
                }
            }

            if(c==n1 && ok) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
        
    }

    return 0;
}