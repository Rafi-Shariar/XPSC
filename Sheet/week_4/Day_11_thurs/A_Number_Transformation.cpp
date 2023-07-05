#include<bits/stdc++.h>
using namespace std;
#define ll long long int
//https://codeforces.com/contest/1674/problem/A
int main(){

    int t; cin>>t;

    while (t--)
    {
        int x,y;
         cin>>x>>y;

         if(y%x==0){

            cout<<1<<" "<<y/x<<endl;
         }else
         {
            cout<<0<<" "<<0<<endl;
         }
         
    }
    


    return 0;
}