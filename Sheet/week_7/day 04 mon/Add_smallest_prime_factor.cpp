#include<bits/stdc++.h>
using namespace std;
#define ll long long int

ll primeCheck(int n){

    for (ll i = 2; i <= n; i++)
    {
        if(n%i==0) return i;
    }
    
}
int main(){

    int t; cin>>t;

    while (t--)
    {
        ll x,y;
        cin>>x>>y;

 
        ll tmp=0;

        if(x%2==0) tmp+=ceil((double)(y-x)/2);
        else
        {
            if(x%3==0){

                x+=3;
                tmp++;

                tmp+=ceil((double)(y-x)/2);
            }else
            {
                x+=x;
                tmp++;
              tmp+=ceil((double)(y-x)/2);
            }
            
        }

        cout<<tmp<<endl;
        


    }
    


    return 0;
}