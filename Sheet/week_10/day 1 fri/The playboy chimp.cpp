#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){

   int n; cin>>n;
   vector<int>v(n);
   for(int i=0; i<n; i++) cin>>v[i];

   int q; cin>>q;

   while (q--)
   {
      int x; cin>>x;

      auto a = lower_bound(v.begin(),v.end(),x);
      auto b = upper_bound(v.begin(),v.end(),x);

      int idx1 = a - v.begin();
      int idx2 = b - v.begin();

      if(idx1 == 0 ) cout<<"X ";
      else cout<< v[idx1 -1]<<" ";

      if(idx2==n) cout<<"X"<<endl;
      else cout<<v[idx2]<<endl;

   }
   
    


    return 0;
}