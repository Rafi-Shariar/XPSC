#include<bits/stdc++.h>
using namespace std;
#define ll long long int
//https://codeforces.com/contest/1759/problem/A
int main(){

    int t; cin>>t;
    string s = "YesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYes";
        

    while (t--)
    {
      string p; cin>>p;

      if(s.find(p) != -1) cout<<"YES"<<endl;
      else cout<<"NO"<<endl; 

    }
    


    return 0;
}