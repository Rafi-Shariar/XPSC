#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){

    int t; cin>>t;

    while (t--)
    {
        ll n,k;
        cin>>n>>k;

        int arr[n];

        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
        }

        ll ans=-1;

        for (int i = 0; i < n; i++)
        {
            if( (arr[i] & k) == k){
                ans &= arr[i];
            }
        }

        if(ans==k) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
        
        

    }
    


    return 0;
}