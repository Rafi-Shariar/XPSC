#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){

    int t; cin>>t;

    while (t--)
    {
        int n,k; cin>>n>>k;

        string s; cin>>s;

        int ans = INT_MAX;

        if(n!=k){

        

        for (int i = 0; i < n-k; i++)
        {
            int c = 0;

            for (int j = i; j < i+k ; j++)
            {
                if(s[j]=='W') c++;
            }

            ans = min(ans,c);
            
        }

        }
        else
        {
            ans = 0;
            for (int i = 0; i < n; i++)
            {
                if(s[i]=='W') ans++;
            }
            
        }
        

        cout<<ans<<endl;
        
    }
    


    return 0;
}