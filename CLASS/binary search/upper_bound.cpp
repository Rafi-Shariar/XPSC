#include<bits/stdc++.h>
using namespace std;
#define ll long long int
//finding 1st occurrance of an element
int main(){

   int n; cin>>n;
   vector<int>a(n);
   for(int i=0; i<n; i++) cin>>a[i];

   int x ; cin>>x;

   auto it = upper_bound(a.begin(), a.end(), x);

   int idx = it - a.begin(); // will return the index

   cout<<idx<<endl;

   
   
    


    return 0;
}