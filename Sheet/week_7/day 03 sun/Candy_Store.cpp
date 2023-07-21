#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){

    int t; cin>>t;

    while (t--)
    {
        int a,b;
        cin>>a>>b;
        

        

        int total = a + (b-a)*2;
        if(a>b) total = b;

        cout<<total<<endl;
    }
    


    return 0;
}