#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){

    int t; cin>>t;

    while (t--)
    {
        int n; cin>>n;
        vector<int>a(n+1);
        vector<int>b(n+1);

        for (int i = 1; i <= n; i++)
        {
            cin>>a[i];
        }

        for (int i = 1; i <= n; i++)
        {
            cin>>b[i];
        }

        int mx = INT_MIN;

        for (int i = 1; i <= n; i++)
        {
            //int dif = ans ( a[i] - b[i]);
            int dif = a[i] - b[i];
            mx = max(dif,mx);
        }

        vector<int>ans;

        for (int i = 1; i <= n; i++)
        {
            //int dif = ans ( a[i] - b[i]);
            int dif = a[i] - b[i];
            if(dif==mx) ans.push_back(i);
        }

        cout<<ans.size()<<endl;

        for(auto i : ans) cout<<i<<" ";
        cout<<endl;
        
        
        
        
    }
    


    return 0;
}