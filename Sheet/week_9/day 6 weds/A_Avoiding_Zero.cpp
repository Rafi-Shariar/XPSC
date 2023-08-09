#include<bits/stdc++.h>
using namespace std;
 
int main() 
{
    int t; cin>>t;
    
    while(t--){
      
      int n; cin>>n;
      
      vector<int>v(n);
      
      int pos=0, neg=0,sum=0;
      
      for(int i=0; i<n; i++){
        cin>>v[i];
        sum += v[i];

        if(v[i]>=0) pos += v[i];
        else neg += (v[i]*-1);
        
      }
      
      if(sum==0){
        cout<<"NO"<<endl;
      }else
      {
        cout<<"YES"<<endl;

        sort(v.begin(),v.end());

        if(pos>neg){

            for(int i=n-1; i>=0; i--) cout<<v[i]<<" ";
            cout<<endl;
        }
        else
        {
            for(auto i : v) cout<<i<<" ";
            cout<<endl;
        }
        
       
        
      }
      
      
     
    }
    return 0;
}