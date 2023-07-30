#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){

    int t; cin>>t;

    while (t--)
    {
        int n; cin>>n;
        vector<int>v(n);

        int f=0,l=0,mn = INT_MAX;

        for (int i = 0; i < n ; i++)
        {
            cin>>v[i];
            if(i==0) continue;

            int dif = v[i] - v[i-1];

            if(dif<mn){
                mn = dif;
                l = i;
                f = i-1;
            }
        }

        if(mn<0) cout<<0<<endl;
        else cout<<(mn/2)+1<<endl;

        int c=0;

        
        
    }
    


    return 0;
}