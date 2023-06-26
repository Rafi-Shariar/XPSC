#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){

    int t; cin>>t;

   
    while (t--)
    {
        int n,h,m;
        cin>>n>>h>>m;

         int time = 60 * h + m;
         int ans = 24 * 60;


        vector<pair<int,int>>v;

        for (int i = 1; i <= n; i++)
        {
            int a,b; cin>>a>>b;
            v.push_back({a,b});  
        }

        sort(v.begin(),v.end());

        int x = v[0].first;
        int y = v[0].second;

        int a,b;

        int t = 60 * x + y - time;
        if(t < 0) t += 24 * 60;

        ans = min(ans, t);

        cout << ans/60 <<" "<<ans%60<<endl;
    }
   
        

        
        
        
        
    
    


    return 0;
}