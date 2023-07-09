#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){

  int n; cin>>n;

  int arr[n];
  int c=0;

  for (int i = 0; i < n; i++)
  {
     cin>>arr[i];

     c += (arr[i] & 1); // if x if odd the c++
   
  }

  cout<<min(c,n-c);

  
  
    


    return 0;
}