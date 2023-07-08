#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){

    int t; cin>>t;

    while (t--)
    {
        string s,p,q;
        cin>>s>>p>>q;

        char c='.';

       
        if(s[0]==s[1] && s[0]==s[2]) c = s[0];

        if(p[0]==p[1] && p[0]==p[2]) c = p[0];

        if(q[0]==q[1] && q[0]==q[2]) c = q[0];

        if(s[0]==p[1] && s[0]==q[2]) c = s[0];

        if(q[0]==p[1] && q[0]==p[2]) c = q[0];

         for (int i = 0; i < 3; i++)
        {
            if(s[i]==p[i] && s[i]==q[i]) c = s[i];
        }

        if(c=='.') cout<<"DRAW"<<endl;
        else cout<<c<<endl;
        
        
        
    }
    


    return 0;
}