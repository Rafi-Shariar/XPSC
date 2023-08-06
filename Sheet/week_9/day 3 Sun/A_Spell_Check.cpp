#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){

    int t; cin>>t;

    while (t--)
    {
        int n; cin>>n;
        string s; cin>>s;

   
        bool T=false,I=false,M=false,U=false,R=false;

        for (int i = 0; i < n; i++)
        {
            if( s[i]=='T') T = true;
            if( s[i]=='i') I = true;
            if( s[i]=='m') M = true;
            if( s[i]=='u') U = true;
            if( s[i]=='r') R = true;
            
        }

        if(n!=5) cout<<"NO"<<endl;
        else
        {
            if(T && I && M && U && R) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
        
        

            
    }
        
    
    


    return 0;
}