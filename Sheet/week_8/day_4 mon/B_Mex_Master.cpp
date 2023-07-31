#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){

    int t; cin>>t;

    while (t--)
    {
        int n; cin>>n;

        int sum=0;
        bool ok = false;

        for (int i = 1; i <= n; i++)
        {
           int a; cin>>a;

           if(a==0) sum++;
           else if( a>=2) ok = true;
        }

        if( sum <= (n+1)/2) cout<<0<<endl;
        else if( ok || sum==n) cout<<1<<endl;
        else cout<<2<<endl;
        
    }
    


    return 0;
}