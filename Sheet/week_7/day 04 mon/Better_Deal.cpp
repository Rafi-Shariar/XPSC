#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){

    int t; cin>>t;

    while (t--)
    {
        int a,b;
        cin>>a>>b;

        int aa = 100-a;
        int bb = 200 - (b*2);

        if(aa<bb) cout<<"FIRST"<<endl;
        else if(aa==bb) cout<<"BOTH"<<endl;
        else cout<<"SECOND"<<endl;
    }
    


    return 0;
}