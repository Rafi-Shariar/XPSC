#include<bits/stdc++.h>
using namespace std;
#define ll long long int
void fast(){
   ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
}

int main(){

    fast();

   string s; cin>>s;

   int c=0;
   int sz = s.size();

   for (int i = 0; i < sz-1; i++)
   {
      if(s[i]==s[i+1]){
        c++;
        s.erase(i,2);
        sz = s.size();
        i = -1;
      }
   }

   if(c & 1) cout<<"Yes"<<endl;
   else cout<<"No"<<endl;
   
       

    return 0;
}