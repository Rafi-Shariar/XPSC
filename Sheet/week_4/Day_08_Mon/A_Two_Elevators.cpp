#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){

    int t; cin>>t;

    while (t--)
    {
        int a,b,c;
        cin>>a>>b>>c;

        if(a==1) cout<<1<<endl;
        else
        {
            int xa = a-1;
            int yb =0; 
            yb += abs(c-b);
            yb += abs(c-1);

            if(xa == yb) cout<<3<<endl;
            else if (xa<yb) cout<<1<<endl;
            else cout<<2<<endl;
            
        }
        
    }
    


    return 0;
}