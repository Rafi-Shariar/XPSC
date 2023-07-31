#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){

   string s; cin>>s;

   vector<int>v;
   int n = s.size()-1;

   for (int i = 0; i <= n ; i++)
   {
     if(i!=n && s[i]=='-' && s[i+1]=='.'){
        v.push_back(1);
        i++;
     }
     else if(i!=n && s[i]=='-' && s[i+1]=='-'){
        v.push_back(2);
        i++;
     }
     else if(s[i]=='.') v.push_back(0);
   }

   for(auto i : v) cout<<i;
   cout<<endl;
   
    


    return 0;
}