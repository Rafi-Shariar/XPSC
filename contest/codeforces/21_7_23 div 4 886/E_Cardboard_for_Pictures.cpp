#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){

    int t; cin>>t;

    while (t--)
    {
        ll n,c;
        cin>>n>>c;

        vector<ll>v(n);

        ll sum=0, l;

        for (int i = 0; i < n; i++)
        {
            cin>>v[i];

            l += v[i] * v[i];
            sum += v[i];
        }

        c -= l;
        c = c/4;
        c = c/n;
        sum/= 2*n;

        ll tmp = sqrtl( sum*sum+c);
        tmp -= sum;

        cout<<tmp<<endl;
        

    }
    


    return 0;
}