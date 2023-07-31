#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){

    int t; cin>>t;

    while (t--)
    {
      int n; cin>>n;
      vector<int>odd;
      vector<int>even;

      for (int i = 1; i <= n; i++)
      {
        int a; cin>>a;

        if(i&1) odd.push_back(a);
        else even.push_back(a);
      }

      int od=0,ev=0;
      if(odd[0] & 1) od = 1;
      if(even[0] & 1) ev = 1;

      bool ok1 = true, ok2 = true;

      for (int i = 0; i < odd.size(); i++)
      {
        int tmp = 0;

        if(odd[i] & 1) tmp = 1;

        if(tmp!=od) ok1 = false;
      }

      for (int i = 0; i < even.size(); i++)
      {
         int tmp = 0;

         if(even[i] & 1) tmp = 1;

         if(tmp != ev) ok2 = false;
      }

      if( ok1 && ok2) cout<<"YES"<<endl;
      else cout<<"NO"<<endl;


      
      

   
      
      
      
    }
    


    return 0;
}