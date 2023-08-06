#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){

    int t; cin>>t;

    while (t--)
    {
        int n; cin>>n;

        int mx = INT_MIN;
        int mn = INT_MAX;

        for (int i = 0; i < n; i++)
        {
            int a; cin>>a;
            mx = max(mx,a);
            mn = min(mn,a);
        }

        cout<<mx-mn<<endl
        ;
        
    }
    


    return 0;
}