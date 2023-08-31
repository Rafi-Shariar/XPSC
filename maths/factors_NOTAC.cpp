#include<bits/stdc++.h>
using namespace std;
#define ll long long int
void fast(){
   ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
}
 map<ll,int>mp;
 bool prime(ll num){

   if (num <= 1)return false; 
   if (num <= 3) return true;
   if (num % 2 == 0 || num % 3 == 0) return false;

    for (int i = 5; i * i <= num; i += 6) {
        if (num % i == 0 || num % (i + 2) == 0) {
            return false;
        }
    }

    return true;
    
}
void numberofDivisor( ll n){
   
    while( n%2==0){
        mp[2]++;
        n/=2;
    }

    for (ll i = 3; i <= sqrt(n); i+=2)
    {
        while( n % i == 0){
            mp[i]++;
            n/=i;
        }
    }

    if(n>2) if(prime(n)) mp[n]++;



    

}

int main(){

    fast();

  ll n;
  while (cin>>n && n!=0)
  {

    ll tmp=n;
    if(n<0) tmp *= -1;

    if( prime(tmp) ){

        if(n<0) printf("%lld = -1 x %lld\n",n,tmp);
        else printf("%lld = %lld\n",n,tmp);

        continue;

    }


    if(n<0)
         numberofDivisor(n*-1);
    else numberofDivisor(n);

    vector<ll>v;

    for(auto div : mp){

        ll val = div.first;
        ll times = div.second;

        for(int i = 1; i<=times; i++) v.push_back(val);
    }

    printf("%lld = ",n);

    if(n<0) printf("-1 x ");
    for (int i = 0; i < v.size()-1; i++)
    {
        printf("%lld x ",v[i]);
    }
    cout<<v[v.size()-1]<<endl;

    mp.clear();
    

  }
  
    return 0;
}