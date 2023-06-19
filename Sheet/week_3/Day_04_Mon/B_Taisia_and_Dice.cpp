#include<bits/stdc++.h>
using namespace std;
#define ll long long int

//https://codeforces.com/contest/1790/problem/B
int main(){

    int t; cin>>t;

    while (t--)
    {
        int n,s,r;
        cin>>n>>s>>r;

        vector<int>v;

        int mx = s-r;
        v.push_back(mx);

        int di = n-1;

        while (v.size()!=n)
        {
        
        if(r%di==0){

            for (int i = 1; i <= di; i++) v.push_back(r/di);
        }else
        {
            int x = r/di;
            v.push_back(x);
            r-=x;
            di--;
        }

        }


        for(auto i : v) cout<<i<<" ";
        cout<<endl;
        

    }
    


    return 0;
}