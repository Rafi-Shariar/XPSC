#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){

    int n,k;
    cin>>n>>k;

    int arr[n];

    for(int i=0; i<n; i++) cin>>arr[i];

    ll sum = 0; int ans=0;

    unordered_map<int,int>mp;

    for( int i=0; i<n; i++){
      sum+=arr[i]; //prefix sum

      if(sum==k){

        ans = max(ans,i+1);

      }

      if(mp.find(sum-k) != mp.end()){

        int index = mp[ sum-k];
        ans = max(ans, i - index);

      }

      if( mp.find(sum)==mp.end()) mp[sum] = i;

    }



    return 0;
}