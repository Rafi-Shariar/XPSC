#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){

    int t; cin>>t;

    while (t--)
    {
        ll n; cin>>n;

        if(n==0) cout<<4<<" "<<6<<" "<<3<<" "<<7<<endl;
        else
        {
            ll a=1,b=2,c,d;

            for (ll i = 3; i <= 1000000; i++)
            {
                ll cur = n^i;

                if(i==cur || cur<=2) continue;
                c = i;
                d = cur;
                break;
            }

             if(c==0) cout<<-1<<endl;
             else cout<<a<<" "<<b<<" "<<c<<" "<<d<<endl;
            
        }

       
        
    }
    


    return 0;
}