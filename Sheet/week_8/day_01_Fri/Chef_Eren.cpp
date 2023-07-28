#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){

    int t; cin>>t;

    while (t--)
    {
        int n,a,b;
        cin>>n>>a>>b;

        if(n==1){
            cout<<1*b<<endl;
            continue;
        }

        int even = n/2;
        int odd = n - even;

        cout<<(a*even) + (b*odd)<<endl;

    }
    


    return 0;
}