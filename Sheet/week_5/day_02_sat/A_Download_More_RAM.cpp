#include<bits/stdc++.h>
using namespace std;
#define ll long long int
//https://codeforces.com/contest/1629/problem/A
int main(){

    int t; cin>>t;

    while (t--)
    {
        int n,k;  cin>>n>>k;

        vector<int>a(n), b(n);

        for (int i = 0; i < n; i++) cin>>a[i];
        for (int i = 0; i < n; i++) cin>>b[i];

        vector<pair<int,int>>v(n);

        for (int i = 0; i < n; i++)
        {
            v[i].first = a[i]; 
            v[i].second = b[i];
        }

        sort(v.begin(),v.end());

        for (int i = 0; i < n; i++)
        {
            if(k>=v[i].first){

                k += v[i].second;
            }
        }

        cout<<k<<endl;
        
        
        

      
        


    }
    


    return 0;
}