#include<bits/stdc++.h>
using namespace std;
#define ll long long int
//https://codeforces.com/contest/1843/problem/A
int main(){

    int t; cin>>t;

    while (t--)
    {
        int n;
        cin>>n;

        vector<int>v;

        for (int i = 0; i < n; i++)
        {
            int a; cin>>a; v.push_back(a);
        }

        sort(v.begin(),v.end());

        int i=0, j=n-1;

        int sum =0;

        while (i<j)
        {
            sum += (v[j] - v[i]);
            i++;
            j--;
        }

        cout<<sum<<endl;

    }
    


    return 0;
}