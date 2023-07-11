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

        int mx = -1;

        for (int i = n; i >= 1; i--)
        {
            for (int j = n; j >= 1; j--)
            {
                int val = gcd(v[i],v[j]);

                if( (i+j > mx) && val==1){
                    mx = i+j;
                    break;
                }
            }
            
        }

        cout<<mx<<endl;
        


    }
    


    return 0;
}