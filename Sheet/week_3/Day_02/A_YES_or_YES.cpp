//https://codeforces.com/contest/1703/problem/A

#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){

    int t; cin>>t;

    while (t--)
    {
        string ss;
        cin>>ss;

        bool ok = true;

        char y = ss[0];
        if( y!='y' && y!='Y') ok = false;

        char e = ss[1];
        if( e!='e' && e!='E') ok = false;

        char s = ss[2];
        if( s!='s' && s!='S') ok = false;

        if(ok) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
        
    }
    


    return 0;
}
