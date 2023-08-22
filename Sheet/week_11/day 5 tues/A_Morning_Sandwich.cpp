#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){

    int t; cin>>t;

    while (t--)
    {
        int b,c,h;
        cin>>b>>c>>h;

        cout<<min(b-1,c+h) *2 + 1<<endl;
    }
    


    return 0;
}