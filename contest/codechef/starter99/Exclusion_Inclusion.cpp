#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){

    int t; cin>>t;

    while (t--)
    {
        int n; cin>>n;
        ll sum = 0;
        vector<int>v(n);

        for (int i = 0; i < n; i++)
        {
            cin>>v[i];
            sum += v[i];
        }
        sort(v.begin(),v.end());

        cout<<sum<<" ";

        for (int i = 0; i < n-1; i++)
        {
            sum -= v[i];
            cout<<sum<<" ";
        }

        cout<<endl;
        
        

    }
    


    return 0;
}