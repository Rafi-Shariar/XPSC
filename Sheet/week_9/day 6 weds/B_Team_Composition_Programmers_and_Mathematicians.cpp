#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){

    int t; cin>>t;

    while (t--)
    {
        ll a,b;
        cin>>a>>b;

        int p = min(a,b);
        int teams = (a+b)/4;

        cout<<min(p,teams)<<endl;

    }
    


    return 0;
}