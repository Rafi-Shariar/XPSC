#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){

    int t; cin>>t;

    while (t--)
    {
        int a,b;
        cin>>a>>b;

        int ans = ( a^(a&b)) + (b ^ (a&b));
        cout<<ans<<endl;
    }
    


    return 0;
}