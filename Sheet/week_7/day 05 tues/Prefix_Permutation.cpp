#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){

    int t; cin>>t;

    while (t--)
    {
        int n; cin>>n;

        int sum = (n* (n+1))/2;

        if( sum%n==0) cout<<-1<<endl;
        else
        {
            for (int i = 1; i <= n; i+=2)
            {
                cout<<i+1<<" "<<i<<" ";
            }
            cout<<endl;
        }
        
    }
    


    return 0;
}