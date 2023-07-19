#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){

    int t; cin>>t;

    while (t--)
    {
        int n; cin>>n;

        int lst = n%10;

        int ans=0;

        if(lst<=4){

            ans = 100 - (n-lst);
        }
        else
        {
            ans = 100 - (n + (10-lst));
        }

        cout<<ans<<endl;
        
    }
    


    return 0;
}