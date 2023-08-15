#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){

    int t; cin>>t;

    while (t--)
    {
        int n,l,r,k;
        cin>>n>>l>>r>>k;
        vector<int>v(n);
        for(int i=0; i<n; i++) cin>>v[i];
        sort(v.begin(),v.end());

        int i=0,c=0,sum=0;
        while (i<n )
        {
            if(sum>=k) break;

            if(v[i]>=l && v[i]<=r && (sum+v[i])<=k){
                c++;
                sum += v[i];
            }
            i++;
        }

        cout<<c<<endl;
        
    }
    


    return 0;
}