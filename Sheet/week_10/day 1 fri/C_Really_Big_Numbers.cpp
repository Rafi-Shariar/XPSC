
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll sum_of_digit(ll n)
{
    ll sm=0;
    while(n!=0)
    {
        sm+=n%10;
        n/=10;
    }
    return sm;
}

int main()
{
    ll n,k,ans=0;

    cin>>n>>k;
    ll l=1,r=n;
    while(l<=r)
    {
        ll mid=(l+r)/2;
       
        if( (mid- sum_of_digit(mid)) >=k)
        {
            ans=n-mid+1;
            r=mid-1;
        }
        else
        {
            l=mid+1;
        }
    }
   
   cout<<ans<<endl;

return 0;
}