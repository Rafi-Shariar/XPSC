#include<bits/stdc++.h>
using namespace std;
#define ll long long int
void fast(){
   ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
}

int main(){

    fast();

    int t; cin>>t;

    while (t--)
    {
       int n; cin>>n;
       vector<pair<int,string>>v;

       for (int i = 0; i < n; i++)
       {
          string s; cin>>s;
          int a; cin>>a;
          v.push_back({a,s});
       }

       sort(v.rbegin(), v.rend());

       for(auto i : v) cout<<i.second<<endl;
        
    }
       

    return 0;
}