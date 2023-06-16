//https://practice.geeksforgeeks.org/problems/longest-sub-array-with-sum-k0809/1

#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int lenOfLongSubarr(int A[],  int N, int K) 
    { 
        // Complete the function
        
      long long int sum = 0; int ans=0;

    unordered_map<int,int>mp;

    for( int i=0; i<N; i++){
      sum+=A[i]; //prefix sum

      if(sum==K){

        ans = max(ans,i+1);

      }

      if(mp.find(sum-K) != mp.end()){

        int index = mp[ sum-K];
        ans = max(ans, i - index);

      }

      if( mp.find(sum)==mp.end()) mp[sum] = i;

    }


    return ans;
    } 

int main(){

    


    return 0;
}