#include<bits/stdc++.h>
using namespace std;
#define ll long long int
//https://codeforces.com/contest/1283/problem/B
int main(){

    int t; cin>>t;

    while (t--)
    {
        int n,k;
        cin>>n>>k;
       
       int x = n%k;
       int mingive = n-x;
       int left = n - mingive;

        int half = k/2;

        if(left>=half){
            mingive += half;
        }else
        {
            mingive += left;
        }
        
       

       cout<<mingive<<endl;
    
       
        
    }
    


    return 0;
}