#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){

    int t; cin>>t;

    while (t--)
    {
        int n; cin>>n;

        int odd=0;
        int even=0;

        for (int i = 0; i < n; i++)
        {
            int a; cin>>a;

            if(a&1) odd++;
            else even++;
        }

        if(odd%2==0 && even%2==0) cout<<"YES"<<endl;
        else if(odd%2==0) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
        
    }
    


    return 0;
}