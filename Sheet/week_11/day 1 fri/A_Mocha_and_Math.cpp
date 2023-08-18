#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){

    int t; cin>>t;

    while (t--)
    {
        int n; cin>>n;
        vector<int>v(n);

        for (int i = 0; i < n; i++)
        {
            cin>>v[i];
        }

        int cur = v[0];

        for(int i=1; i<n; i++) cur&=v[i];

        cout<<cur<<endl;
        
    }
    


    return 0;
}