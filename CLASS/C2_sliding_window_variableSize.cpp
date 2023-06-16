#include<bits/stdc++.h>
using namespace std;
// given array find the longest sub array size ,who's elements sum is equal to k
#define ll long long int
int main(){

    int n,k;
    cin>>n>>k;

    ll arr[n];
    for(int i=0; i<n; i++) cin>>arr[i];

    int i=0,j=0;
    ll sum = 0;
    int ans=0;

    while (j<n)
    {
       sum += arr[j];

       if(sum>k){

        while (sum>k)
        {
          sum -=arr[i];
          i++;
        }
        
       }

       if(sum==k){
        ans = max(ans, j-i + 1);
       }

       j++;

    }
    



    return 0;
}