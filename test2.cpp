#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){

    int t; cin>>t;

    while (t--)
    {
   
        string s; cin>>s;

        int a = 10 * (s[0]-'0');
        a += (s[1] - '0' );

        int b = 10 * ( s[3] - '0');
        b += (s[4] - '0');

        cout<<a<<" "<<b<<endl;
    }
    


    return 0;
}
