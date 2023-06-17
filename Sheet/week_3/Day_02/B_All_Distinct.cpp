#include<bits/stdc++.h>
//https://codeforces.com/contest/1692/problem/B
using namespace std;
#define ll long long int
int main(){

    int t; cin>>t;

    while (t--)
    {
        int n; cin>>n;

        set<int>s;

        for (int i = 0; i < n; i++)
        {
            int a; cin>>a;
            s.insert(a);
        }

        int x = n - s.size();

        if( x%2==0) cout<<s.size()<<endl;
        else cout<<s.size()-1<<endl;
    }
    


    return 0;
}