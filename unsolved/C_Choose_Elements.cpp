#include<bits/stdc++.h>
using namespace std;

int main(){

  int n,k;
  cin>>n>>k;

 vector<int>v;

  for (int i = 0; i < n; i++)
  {
    int a; cin>>a;
    v.push_back(a);
  }

  sort(v.begin(),v.end());
  reverse(v.begin(),v.end());

  long long int sum=0;

  for (int i = 0; i < k; i++)
  {
    if(v[i]>0) sum+=v[i];
  }

  if( sum<0) cout<<0<<endl;
  else cout<<sum<<endl;

  // cout<<sum<<endl;
  
  


   
   
 
 

    return 0;
}
