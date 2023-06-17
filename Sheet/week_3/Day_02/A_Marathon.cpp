//https://codeforces.com/contest/1692/problem/A

#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){

    int t; cin>>t;

    while (t--)
    {
        int a,c=0;
        cin>>a;

        for (int i = 0; i < 3; i++)
        {
            int b; cin>>b;

            if(b>a) c++;
        }

        cout<<c<<endl;
        
    }
    


    return 0;
}