#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){

    int t; cin>>t;

    while (t--)
    {
        int n; cin>>n;
        string s; cin>>s;

        bool zla = false;

        int sz = s.size();

        if(sz==1){
            cout<<"Ramos"<<endl;
            continue;
        }

        string ans = "Ramos";

        for (int i = 0; i < s.size()-1; i+=2)
        {
          if(s[i] != s[i+1] && ans=="Ramos"){

            ans = "Zlatan";
          }
          else if (s[i] != s[i+1] && ans=="Zlatan")
          {
            ans = "Ramos";
          }
          else
          {
            break;
          }
          
          
        }

        cout<<ans<<endl;
        
    }
    


    return 0;
}