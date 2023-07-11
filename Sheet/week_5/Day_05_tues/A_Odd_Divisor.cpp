#include<bits/stdc++.h>
using namespace std;
#define ll long long int

bool isPowerOfTwo(long long int n)
{
    if (n == 0)
        return false;
 
    return (ceil(log2(n)) == floor(log2(n)));
}
int main(){
 
   int t; cin>>t;
   
   while (t--)
   {
     long long int n; cin>>n;
 
     if(isPowerOfTwo(n)) cout<<"NO"<<endl;
     else cout<<"YES"<<endl;
 
 
   }
   
    
 
 
    return 0;
}