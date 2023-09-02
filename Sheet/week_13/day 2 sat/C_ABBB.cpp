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
         stack<char>st;

       int i=0;

       while (i<s.size())
       {
          if(s[i]=='A') st.push('A');
          else
          {
            if(!st.empty() && st.top()=='B' ) st.pop();
            else if( !st.empty() && st.top()=='A') st.pop();
            else st.push('B');
          }

          i++;
          
       }

       cout<<st.size()<<endl;
    }

    return 0;
}