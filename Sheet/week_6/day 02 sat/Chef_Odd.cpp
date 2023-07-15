#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){

    int t; cin>>t;

    while (t--)
    {
        ll n,k;
        cin>>n>>k;

        ll odds = (n/2) + (n%2);
        ll extra_odd = odds - k;

        if(n < 2*k) cout<<"NO"<<endl;
        else if(n== 2*k) cout<<"YES"<<endl;
        else{

            if(extra_odd % 2==0) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
    }
    


    return 0;
}