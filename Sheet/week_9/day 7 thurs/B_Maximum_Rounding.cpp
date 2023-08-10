#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){

    int t; cin>>t;

    while (t--)
    {
        string s; cin>>s;
        s='0'+s;

        int n = s.size()-1;
        int cur= n+1;

        for (int i = n; i >=0; i--)
        {
            if(s[i]>='5'){
                s[i-1]++;
                cur = i;
            }
        }

        int st=0;

        if(s[0]=='0') st=1;


        for (int i = st; i <s.size(); i++)
        {
            if(i>=cur) cout<<'0';
            else cout<<s[i];
        }
        cout<<endl;
        
        

    }
    


    return 0;
}