#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){

    int t; cin>>t;

    while (t--)
    {
        int n; cin>>n;
        vector<int>v(n);

        for(int i=0; i<n; i++ ) cin>>v[i];

        sort(v.begin(),v.end());

        vector<int>b(n);
        b[0] = 1;

        for (int i = 1; i <n; i++)
        {
            b[i] = min( b[i-1]+1,v[i]);
        }

        ll ans = 0;

        for (int i = 0; i < n; i++)
        {
          ans += v[i] - b[i];
        }

        cout<<ans<<endl;
        
        
    }
    


    return 0;
}