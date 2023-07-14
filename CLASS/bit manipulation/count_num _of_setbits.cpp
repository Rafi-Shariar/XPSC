#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){

    int t; cin>>t;

    while (t--)
    {
        int n; cin>>n;
        int c =0;

        while (n!=0)
        {
            if( n&1) c++;
            n = n >> 1;
        }

        cout<<c<<endl;
        
    }
    

    return 0;
}
// n = 7 = bit = 111
//ans = 3