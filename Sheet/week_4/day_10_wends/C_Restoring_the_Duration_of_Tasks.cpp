#include<bits/stdc++.h>
using namespace std;
#define ll long long int
//https://codeforces.com/contest/1690/problem/C
int main(){

    int t; cin>>t;

    while (t--)
    {
        int n; cin>>n;
        int s[n],f[n];

        for(int i=0; i<n; i++) cin>>s[i];
        for(int i=0; i<n; i++) cin>>f[i];

        vector<int>v;

        for (int i = 0; i < n; i++)
        {
            if(i<1)
            v.push_back(f[i]-s[i]);
            else
            {
                if(s[i]<f[i-1]){

                    v.push_back(f[i]-f[i-1]);
                }else
                {
                     v.push_back(f[i]-s[i]);
                }
                
            }
        }

        for(auto i : v) cout<<i<<" ";
        cout<<endl;
        
        
    }
    


    return 0;
}