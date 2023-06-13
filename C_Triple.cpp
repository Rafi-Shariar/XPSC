#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){

    int t; cin>>t;

    while (t--)
    {
        int n; cin>>n;
       int frq[n+1] = {0};

       bool found=false;
       int val;

       for (int i = 0; i < n; i++)
       {
         int a; cin>>a;
         frq[a]++;

         if( frq[a]==3){
            found = true;
            val = a;
         }

       }

       if(!found) cout<<-1<<endl;
       else
       {
        cout<<val<<endl;
       }
       
       


    }
    


    return 0;
}