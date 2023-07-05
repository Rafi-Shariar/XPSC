#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){

    int t; cin>>t;

    while (t--)
    {
        string s; cin>>s;

        int idx=0;

        for (int i = s.size()-1; i >= 0; i--)
        {
            if(s[i]=='1'){
                idx = i;
                break;
            }
        }

        int c=0;

        for (int i = idx; i < s.size(); i++)
        {
            c++;
            if(s[i]=='0') break;
        }

        if(s.size()==1) cout<<1<<endl;
        else cout<<c<<endl;
        
        
    }
    


    return 0;
}