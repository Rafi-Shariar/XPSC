#include<bits/stdc++.h>
using namespace std;
#define ll long long int
//https://codeforces.com/contest/1843/problem/C
int main(){

    int t; cin>>t;

    while (t--)
    {
        ll n;
        cin>>n;

        ll sum = 0;

        while (n!=0)
        {
            sum += n;
            n/=2;
        }


        cout<<sum<<endl;
    }
    


    return 0;
}