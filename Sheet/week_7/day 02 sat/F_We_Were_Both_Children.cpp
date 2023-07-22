#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){

    int t; cin>>t;

    while (t--)
    {
        int n; cin>>n;


        vector<ll>v;

        for (int i = 0; i < n; i++)
        {
            ll a; cin>>a;
            if(a>0 && a<=n) v.push_back(a);

        }

        if( n==1){
            cout<<0<<endl;
    
            continue;
        }

        vector<ll>freq(n+1,0);

        for (int i = 0; i < v.size(); i++)
        {
            ll val = v[i];

            while (val<=n)
            {
                freq[ val ]++;
                val += v[i];
            }
            
        }

        int mx = 0;

        // for (int i = 0; i <=n; i++)
        // {
        //     cout<<i<<"--> "<<freq[i]<<endl;
        // }
        

        for (int i = 1; i <= n; i++)
        {
            if( mx<freq[i]) mx = freq[i];
        }

        cout<<mx<<endl;

       
          
    }
    


    return 0;
}