#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){

    int t; cin>>t;

    while (t--)
    {
        int n; cin>>n;
        string s; cin>>s;

        for (int i = 0; i < s.size(); i++)
        {
            if(s[i]>='A' && s[i]<='Z') s[i] = s[i] +32;
        }

        string m = "meow";

        string tmp;

        // bool freq[26]={false};

        for (int i = 0; i < s.size(); i++)
        {
            //  if(freq[ s[i]-'a' ]==false){
               
            //     tmp +=s[i];
            //     freq[ s[i]-'a' ]=true; 

            //     }
            
            if(tmp.empty() || tmp.back() != s[i]) tmp.push_back(s[i]);

        }

        // cout<<s<<"   "<<tmp<<endl;

        if(tmp==m) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;

       
        

        
    }


    


    return 0;
}


