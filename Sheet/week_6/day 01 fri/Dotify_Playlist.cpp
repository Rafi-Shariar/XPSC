#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){

    ll t; cin>>t;

    while (t--)
    {
        int n,k,l;
        cin>>n>>k>>l;

        vector<ll>v;


        for (int i = 0; i < n; i++)
        {
            ll a,b;
            cin>>a>>b;

            if(b==l) {
                v.push_back(a);
               
            }
        }

        if(v.empty()){
            cout<<-1<<endl;
            continue;
        }

        sort(v.rbegin(),v.rend());

        ll i=0, sum=0,c=0;

        while (true)
        {
            sum+=v[i];
            i++;
            c++;

            if(i==k) break;
            
            if(i==v.size()) break;

        }
        
        if(c==k)cout<<sum<<endl;
        else cout<<-1<<endl;
        
        
    }
    


    return 0;
}