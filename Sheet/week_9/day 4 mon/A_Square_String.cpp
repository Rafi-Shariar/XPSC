#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){

    int t; cin>>t;

    while (t--)
    {
        string s; cin>>s;

        int n = s.size();

       if(n&1) cout<<"NO"<<endl;
       else
       {
         int half = n/2;
         string tmp = s.substr(half);
         
         while (n>half)
         {
            s.pop_back();
            n--;
         }

         if(s==tmp) cout<<"YES"<<endl;
         else cout<<"NO"<<endl;
         
       }
       
        

    }
    


    return 0;
}