#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){

    int t; cin>>t;

    while (t--)
    {
        ll n,m,d;
        cin>>n>>m>>d;
        vector<ll>a(m);

        for(int i=0;i<m;i++) cin>>a[i];
  
        ll sum = m;
        for(int i=0;i<m-1;i++){
       
        ll cur = a[i];
        ll nxt = a[i+1];
        sum += (nxt - cur - 1) / d;
        
       }

      if(a[0] != 1){
       
        sum += (a[0] - 2) / d;
        sum += 1;

       }

     sum += (n-a[m-1])/d;

    vector<ll> con(m);

    ll ans = INT_MAX;

      for(int i=1;i<m-1;i++)
      {
        ll prv = a[i-1];
        ll nxt = a[i+1];
        ll now = a[i];
        ll tmp = sum;
        tmp -= (now - prv -1) /d;
        tmp -= (nxt - now -1) /d;
        tmp--;

        tmp += (nxt-prv-1)/d;
        con[i] = tmp;
        ans = min(ans , tmp);
      }

   
        ll tmp = sum;
        if(a[0] != 1)
        {
            tmp -= (a[0] - 2) / d;
            tmp -= 1;
        }
        tmp--;
        tmp -= (a[1]-a[0]-1)/d;
        tmp += (a[1] - 2)/ d;
        tmp++;
        ans = min(ans , tmp);
        con[0] = tmp;


        ll tmp2 = sum;
        tmp2 -= (n-a[m-1])/d;
        tmp2--;
        tmp2 -= (a[m-1]-a[m-2]-1)/d;
        tmp2 += (n-a[m-2])/d;
        ans = min(ans , tmp2);
        con[m-1] = tmp2;

    
      ll c = 0;
      for(int i=0;i<m;i++) c += (con[i] == ans);


      cout<<ans<<" "<<c<<endl;
  
    
        
    }
    


    return 0;
}