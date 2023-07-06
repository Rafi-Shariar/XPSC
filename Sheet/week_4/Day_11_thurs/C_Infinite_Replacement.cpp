#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){

    int t; cin>>t;

    while (t--)
    {
        string s,v;
        cin>>s;
        cin>>v;

        int n = s.size();
        int m = v.size();

        ll ans;

        if(m==1){

            if(v[0]=='a') ans=1;
            else
            {

                ans = pow(2,n);
            }
        }else
        {
            int c = 0;
            for(int i=0; i<m; i++) if(v[i]=='a') c++;

            if(c>0) ans = -1;
            else   ans = pow(2,n);
        }

        cout<<ans<<endl;
        
    }
    


    return 0;
}