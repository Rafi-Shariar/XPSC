#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){

    int t; cin>>t;

    while (t--)
    {
        int n,m;
        cin>>n>>m;

        if((n&1) && (m&1)) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
    


    return 0;
}