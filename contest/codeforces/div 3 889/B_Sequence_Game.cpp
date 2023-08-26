#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){

    int t; cin>>t;

    while (t--)
    {
        int n; cin>>n;
        vector<int>v(n);
        for( int i=0; i<n; i++) cin>>v[i];

       vector<int>st;
       st.push_back(v[0]);

       for (int i = 1; i < n; i++)
       {
          if(v[i]>= st.back()) st.push_back(v[i]);
          else
          {
            if(v[i]==1) st.push_back(1);
            else {
                st.push_back(v[i]);
            }
            i--;
          }
          
       }

       cout<<st.size()<<endl;
      
      for(auto i : st) cout<<i<<" ";

       cout<<endl;
       
       

        
        
    }
    


    return 0;
}