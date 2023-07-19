#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){

    int t; cin>>t;

    while (t--)
    {
        int n; cin>>n;
        vector<int>v(n);

        for (int i = 0; i < n; i++)
        {
            cin>>v[i];
        }

        int ans = abs(v[0] - v[1]);

        for (int i = 1; i < n; i++)
        {
            int tmp = max(abs(v[i]-v[i-1] ) , abs(v[i] - v[i+1]) );
            ans = min(ans, tmp);
        }

        ans = min ( ans, abs( v[n-1] - v[n-2]));

        cout<<ans<<endl;
        
        
    }
    


    return 0;
}