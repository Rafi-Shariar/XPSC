#include<bits/stdc++.h>
using namespace std;
int main(){

   int t; cin>>t;

   while (t--)
   {
    int n,m;
    cin>>n>>m;

    bool ok = false;

    if( n==m) ok = true;

    while (n!=0)
    {
      int tmp = n-1;
      int tmp2 = m+1;

      if(tmp==tmp2) ok = true;
      n--;
    }

    while (m!=0)
    {
      int tmp = m-1;
      int tmp2 = n+3;

      if(tmp==tmp2) ok = true;
      m--;
    }

    while (n!=0 || m!=0)
    {
    int tmp = (n-1);
    int tmp2 = m;
    if(tmp==tmp2) ok = true;

    int tmp3 = (n-1);
    int tmp4 = m+1;
    if(tmp3==tmp4) ok = true;

      int tmp5 = (m-1);
    int tmp6 = n+3;
    if(tmp5==tmp6) ok = true;

    n--;
    m--;

    }
    
    if(ok) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    
    
      
   }
   


    return 0;
}