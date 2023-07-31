#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){

    string s; cin>>s;

    int n = s.size();
    int c=0;

    for (int i = 0; i < n; i++)
    {
        if(s[i]>='A' && s[i]<='Z') c++;
    }

    int small = n-c;

    if(c>small){

        for (int i = 0; i < n; i++)
        {
            if(s[i]>='a' && s[i]<='z') s[i]=s[i]-32;
            
            cout<<s[i];
        }
        cout<<endl;
        
    }else
    {
        for (int i = 0; i < n; i++)
        {
            if(s[i]>='A' && s[i]<='Z') s[i]=s[i]+32;
            
            cout<<s[i];
        }
        cout<<endl;
    }
    
    
    


    return 0;
}