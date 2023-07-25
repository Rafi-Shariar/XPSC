#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){

    int t; cin>>t;

    while (t--)
    {
        int n; cin>>n;
        vector<int>v(n);

        int mn = INT_MAX;

        for (int i = 0; i < n; i++)
        {
            cin>>v[i];

            mn = min(mn,v[i]);
        }

        int c=0;

        for (int i = 0; i < n; i++)
        {
            if(v[i]>mn)c++;
        }

        cout<<c<<endl;
        
        
    }
    


    return 0;
}