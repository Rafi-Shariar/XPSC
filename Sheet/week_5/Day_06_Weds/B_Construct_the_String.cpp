#include<bits/stdc++.h>
using namespace std;
#define ll long long int
//https://codeforces.com/contest/1335/problem/B
int main(){

    int t; cin>>t;

    while (t--)
    {
        int n,sz,dis;
        cin>>n>>sz>>dis;

        string ans;
        char ch = 'a';

        for (int i = 0; i < dis; i++)
        {
            ans += ch;
            ch++;
        }

        for (int i = dis; i < sz ; i++)
        {
            ans += ans[i-dis];
        }

        for (int i = sz; i < n; i++)
        {
            ans += ans[i-dis];
        }

        cout<<ans<<endl;

    }
    

    return 0;
}