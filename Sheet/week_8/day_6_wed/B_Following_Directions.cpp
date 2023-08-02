#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){

    int t; cin>>t;

    while (t--)
    {
        int n; cin>>n;
        string s; cin>>s;

        int x=0,y=0;
        bool found = false;

        for (int i = 0; i < n; i++)
        {
            if(s[i]=='U') y++;
            if(s[i]=='D') y--;
            if(s[i]=='L') x--;
            if(s[i]=='R') x++;

            if(x==1 && y==1){
                found = true;
                break;
            }
        }

        if(found) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
        
    }
    


    return 0;
}