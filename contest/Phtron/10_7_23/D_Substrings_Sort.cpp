#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){

  
    int n; cin>>n;
    vector<pair<int,string>>v;

    for ( int i = 0; i < n; i++)
    {
        string s; cin>>s;
        int n = s.size();
        v.push_back(make_pair(n,s));
    }

    sort(v.begin(), v.end() );

    vector<string>s;

    for(int i=0; i<n; i++) s.push_back(v[i].second);

     bool pos = true;

     for (int i = 0; i < n-1; i++)
     {
       string cur = s[i];
       string nxt = s[i+1];

       if(nxt.find(cur) == -1){
        pos = false;
        break;
       }

     }

     if(pos){

      cout<<"YES"<<endl;
      for(auto i : s) cout<<i<<endl;
     }
     else cout<<"NO"<<endl;
     

    
    


    return 0;
}