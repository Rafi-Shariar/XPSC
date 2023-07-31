#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){

    int t; cin>>t;

    while (t--)
    {
        int n; cin>>n;

        if(n<=1399) cout<<"Division 4"<<endl;
        if(n>1399 && n<=1599) cout<<"Division 3"<<endl;
        if(n>1599 && n<= 1899) cout<<"Division 2"<<endl;
        if( n>=1900) cout<<"Division 1"<<endl;
    }
    


    return 0;
}