#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){

    int t; cin>>t;

    while (t--)
    {
        int n; cin>>n;

        ll ans = INT_MIN;

        for (int i = 1; i <= n; i++)
        {
           for (int j = 1; j <= n; j++)
           {
              ll mx = i*j;
              vector<ll>v;
              ll cur = 0, cost = 0;

              for (int k = n; k >= 1; k--)
              {
                 ll lim = mx/k;

                 while (cur<lim && cur<n)
                 {
                    cur++;
                    if(cur != j) v.push_back(cur);
                 }

                 if(k==i) continue;

                 if(v.empty()){
                    cost = -1;
                    break;
                 }

                 cost += (k * v.back());
                 v.pop_back();
                 
              }

              ans = max(ans,cost);
              
           }
           
        }

        cout<<ans<<endl;



        
    }
    


    return 0;
}