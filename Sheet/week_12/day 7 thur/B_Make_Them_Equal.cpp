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
  
    while(t--)
    {
        int n; cin>>n;
        map<int,bool>mp;
        vector<int>v;
        for (int i = 0; i < n; i++)
        {
            int a; cin>>a;
         if(!mp[a]){
            v.push_back(a);
            mp[a]=true;
         }
        }

        if(mp.size()==1){
            
            cout<<0<<endl;
            continue;
        }


        set<int>diff;

        for (int i = 1; i < v.size(); i++)
        {
            int dif = abs(v[i]-v[i-1]);

            if(dif>0) diff.insert(dif);
        }
        
        if(diff.size()==1){
            
         if(n==2){
            if(*diff.begin() % 2 == 0) cout<< *diff.begin()/2<<endl;
            else cout<<-1<<endl;
            continue;
         }   
            
            cout<<*diff.begin()<<endl;
        }else cout<<"-1"<<endl;


        
        

    }

    return 0;
}