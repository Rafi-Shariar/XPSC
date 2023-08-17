#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){

    int t; cin>>t;

    while (t--)
    {
        ll n,k;
        cin>>n>>k;

        bool pos = false;

        for (ll i = 0; i < 2; i++)
        {
            if(n- i *k >= 0 && (n-i*k)%2==0){
                cout<<"YES"<<endl;
                pos = true;
                break;
            }
        }
        

        if(!pos) cout<<"NO"<<endl;
    }
    


    return 0;
}