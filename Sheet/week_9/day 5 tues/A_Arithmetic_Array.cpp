#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){

    int t; cin>>t;

    while (t--)
    {
        int n; cin>>n;
        int sum = 0;
        bool neg = false;

        for (int i = 0; i < n; i++)
        {
            int a; cin>>a;
            sum += a;
        }

       if(sum==n) cout<<0<<endl;
       else if(sum<n) cout<<1<<endl;
       else cout<<sum-n<<endl;

        
        
    }
    


    return 0;
}