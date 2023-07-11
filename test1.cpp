#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int gcd(int a, int b) {
    if (b == 0)
        return a;
    else
        return gcd(b, a % b);
}


int main(){

    int t; cin>>t;

    while (t--)
    {
        int n; cin>>n;
        vector<int>v(n+1);

        for(int i=1; i<=n; i++) cin>>v[i];

        int mx = INT_MIN;

        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                int val = gcd(v[i],v[j]);

                if( (i+j > mx) && val==1){
                    mx = i+j;
                }
            }
            
        }

        if(mx==INT_MIN) cout<<-1<<endl;
        else cout<<mx<<endl;
        


    }
    


    return 0;
}