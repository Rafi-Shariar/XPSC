#include<bits/stdc++.h>
using namespace std;
#define ll long long int

//https://codeforces.com/contest/1714/problem/C

ll count_dig(ll n){

    int c = 0;

    while (n!=0)
    {
        c++;
        n/=10;
    }

    return c;
    
}
int main(){

    int t; cin>>t;

    while (t--)
    {
        ll n; cin>>n;

        ll digits = count_dig(n);

        ll x = pow(10, digits-1);
        if(x%10==9) x = x+1;

        cout<<n-x<<endl;

    }
    


    return 0;
}