#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){

    int t; cin>>t;

    while (t--)
    {
        int n,p;
        cin>>n>>p;

        vector<int>v(n);

        for(int i=0; i<n; i++) cin>>v[i];

        sort(v.rbegin(), v.rend());

        int val;

      

        for (int i = 0; i < p; i++)
        {
            val = v[i];
        }

        cout<<val-1<<endl;
        

    }
    


    return 0;
}