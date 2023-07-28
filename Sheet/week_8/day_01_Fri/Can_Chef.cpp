#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){

    int t; cin>>t;

    while (t--)
    {
        int x,y;
        cin>>x>>y;

        int z = x*15;

        if( z>= 2*y) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    


    return 0;
}