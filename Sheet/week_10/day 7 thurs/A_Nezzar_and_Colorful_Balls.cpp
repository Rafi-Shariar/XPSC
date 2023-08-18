#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){

    int t; cin>>t;

    while (t--)
    {
        int n; cin>>n;
        int freq[n+1]={0};
        int mx = INT_MIN;

        for (int i = 0; i < n; i++)
        {
            int a; cin>>a;
            freq[a]++;

            mx = max(mx,freq[a]);
        }

        cout<<mx<<endl;
        
    }
    


    return 0;
}