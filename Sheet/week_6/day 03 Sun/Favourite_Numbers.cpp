#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){

    int t; cin>>t;

    while (t--)
    {
        int n; cin>>n;

        if(n%7==0 && n%2==0) cout<<"Alice"<<endl;
        else if(n%9==0 && n%2!=0) cout<<"Bob"<<endl;
        else cout<<"Charlie"<<endl;
    }
    


    return 0;
}