#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){

    int t; cin>>t;

    while (t--)
    {
        int n; cin>>n;
        int sum_o=0, sum_e=0;

        for (int i = 0; i < n; i++)
        {
            int a; cin>>a;

            if(a&1) sum_o += a;
            else sum_e += a;
        }

        if(sum_e>sum_o) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
        
    }
    


    return 0;
}