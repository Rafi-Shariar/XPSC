#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){

    int t; cin>>t;

    while (t--)
    {
        int n,m,h;
        cin>>n>>m>>h;

        vector<vector<int>>times (n,vector<int>(m));
        
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin>>times[i][j];
            }
            
        }

        vector<pair<int,int>>p(n);

        for (int i = 0; i < n; i++)
        {
            p[i].first = 0;
            p[i].second = i;
        }

        for (int j = 0; j < m; j++)
        {
            for (int i = 0; i < n; i++)
            {
                p[i].first += times[i][j];
            }
            
        }

        sort(p.begin(), p.end());

        int ans = n;

        for (int i = 0; i < n; i++)
        {
            if(p[i].second == 0){

                ans = i + 1;
           
            }
        }

        cout<<ans<<endl;
        
        
        
        
    }
    


    return 0;
}