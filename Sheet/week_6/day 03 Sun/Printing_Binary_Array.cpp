#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){

    int t; cin>>t;

    while (t--)
    {
        int n; cin>>n;
        cin.ignore();
        
        int s[n];

        for(int i=0; i<n; i++) cin>>s[i];

        for (int i = 0; i < n; i++)
        {
            if(s[i]==1) cout<<0<<" ";
            else cout<<1<<" ";
        }

        cout<<endl;
        
    }
    


    return 0;
}