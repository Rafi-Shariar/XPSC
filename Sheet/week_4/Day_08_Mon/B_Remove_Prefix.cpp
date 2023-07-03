#include<bits/stdc++.h>
using namespace std;
#define ll long long int
//https://codeforces.com/contest/1714/problem/B
int main(){

    int t; cin>>t;

    while (t--)
    {
        int n; cin>>n;
        int freq[n+1]={0};

        vector<int>v;
        
        for (int i = 0; i < n; i++)
        {
            int a; cin>>a;
            freq[a]++;
            v.push_back(a);
        }

        int ans ;

        for (int i = 0; i < n; i++)
        {
            int j = v[i];

            // cout<<j<<" --> "<<freq[j]<<endl
            // ;

            if( freq[j] > 1){
                ans = i+1;
                freq[j]--;
            }
        }

        cout<<ans<<endl;
        ans = 0;
        

       
        
        
        
    }
    


    return 0;
}