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

  sort(v.rbegin(),v.rend());

  long long int sum=0;

  for (int i = 0; i < k; i++)
  {
    sum+=v[i];
  }

  if( sum<0) cout<<0<<endl;
  else cout<<sum<<endl;
  
  


   
   
 
 

    return 0;
}
