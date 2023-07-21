#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){

    int t; cin>>t;

    while (t--)
    {
        int runs,overs;
        cin>>runs>>overs;

        int pos = overs * 36;

        if(pos>=runs) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    


    return 0;
}