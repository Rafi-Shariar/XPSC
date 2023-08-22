#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){

    int t; cin>>t;

    while (t--)
    {
        int n; cin>>n;

        bool freq[n+1]={false};
        vector<int>v;

        for (int i = 1; i <= n; i++)
        {
            if(freq[i]) continue;

            int cur = i;

            while (cur<=n)
            {
                if(freq[cur]) break;

                freq[cur] = true;
                v.push_back(cur);
                cur*=2;
            }
            
        }

        for(auto i : v) cout<<i<<" ";
        cout<<endl;
        
    }
    


    return 0;
}