#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){

    int t; cin>>t;

    while (t--)
    {
        ll n; cin>>n;

        ll a,b,c,d;
        bool ok = false;

        if(n==1){
            cout<<-1<<endl;
            continue;
        }

        for (int i = 1; i <=(n/3); i++)
        {
            for (int j = 1; j <= (n/3); j++)
            {
                c = n - (i*j);

                if(c>1){
                a = i;
                b = j;
                d = c;
                }
                
            }
            
        }

         cout<<a<<" "<<b<<" "<<c<<endl;
       
        
    }
    


    return 0;
}