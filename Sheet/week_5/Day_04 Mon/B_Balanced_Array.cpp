#include<bits/stdc++.h>
using namespace std;
int main(){
 
   int t; cin>>t;
 
   while (t--)
   {
 
   int n;
   cin>>n;
 
   int arr[n+1];
   int sum = 0;
 
   for (int i = 1; i <= n/2; i++)
   {
      arr[i] = i*2;
      sum+=arr[i];
   }
 
   int s = n/2 - 1;
   int last = arr[n/2] + s;
 
   arr[n] = last;
 
  int idx = 1;
   for (int i = n/2+1; i < n; i++)
   {
      arr[i] = idx;
      idx+=2;
   }
 
   int even_sum = 0;
 
   for (int i = 1; i <= n/2; i++)
   {
      even_sum += arr[i];
   }
 
   int odd_sum = 0;
 
    for (int i = n/2+1; i <= n; i++)
   {
      odd_sum+=arr[i];
   }
 
 
 
   if( odd_sum == even_sum && arr[n]%2!=0){
      cout<<"YES"<<endl;
 
      for (int i = 1; i <= n; i++)
      {
         cout<<arr[i]<<" ";
      }
      cout<<endl;
      
   }else cout<<"NO"<<endl;
 
 
   }
 
   
 

   return 0;
}