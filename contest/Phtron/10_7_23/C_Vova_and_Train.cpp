#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){

    int t; cin>>t;

    while (t--)
    {
        ll L,v,l,r;  cin>>L>>v>>l>>r;

        ll lan = L/v;

        // int x = (r - l + 1)/v;

        int x = (r/v) - ((l-1)/v);
      


        cout<<lan - x<<endl;



    }
    


    return 0;
}