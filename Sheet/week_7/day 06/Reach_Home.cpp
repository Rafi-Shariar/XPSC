#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){

    int t; cin>>t;

    while (t--)
    {
        int a,b;
        cin>>a>>b;

        int dis = a*5;

        if( dis>=b) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    


    return 0;
}