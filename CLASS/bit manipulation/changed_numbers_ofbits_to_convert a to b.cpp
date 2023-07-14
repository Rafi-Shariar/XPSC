#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){

    int t; cin>>t;

    while (t--)
    {
        int a,b; cin>>a>>b;

        int c = a^b;

        int cnt=0;

        while (c)
        {
            if(c&1)cnt++;
            c = c >> 1;
        }

        cout<<cnt<<endl;
        
    }
    

    return 0;
}
/*
a = 10 = 1010
b = 15 = 1111
^
c = 5 = 0101
ans = 2 

*/