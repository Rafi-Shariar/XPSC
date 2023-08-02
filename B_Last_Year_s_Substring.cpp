#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){

    int t; cin>>t;

    while (t--)
    {
        int n; cin>>n;
        string s; cin>>s;
        bool ok = false;

        for (int i = 0; i <=4; i++)
        {
            if( s.substr(0,i) + s.substr(n-4+i, 4-i)=="2020"){
               ok = true;
               break;             
            }
        }

        if(ok) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
        
    }
    


    return 0;
}