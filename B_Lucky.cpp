#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){

    int t; cin>>t;

    while (t--)
    {
        string s;
        cin>>s;

        int l=0,r=0;

        for (int i = 0; i < s.size(); i++)
        {
            int ch = s[i] - '0';
          
           if( i<3) l+=ch;
           else r+=ch;
           
        }

        if( r==l)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
        
    }
    


    return 0;
}