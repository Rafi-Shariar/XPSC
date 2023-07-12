#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){

    int t; cin>>t;

    while (t--)
    {
      int n; cin>>n;

      vector<int>v(n);

      for(int i=0; i<n; i++) cin>>v[i];

      int mn = INT_MAX;

      for (int i = 0; i < n; i++)
      {
         for (int j = 0; j < n; j++)
         {
            if(i==j) continue;

            if(v[i]-v[j]>=0) mn = min(mn, v[i]-v[j]);

         }
         
      }

      cout<<mn<<endl;
      
    }
    


    return 0;
}