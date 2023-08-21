#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){

    int t; cin>>t;

    while (t--)
    {
        ll n; cin>>n;
        int c=0;

        while (true)
        {
            ll tmp = n;
            ll rev = 0;

            while (n!=0)
            {
                rev = (rev*10) + (n%10);
                n/=10;
            }

            if(rev==tmp){
                cout << c << " " << rev << endl;
                break;
            }
            else
            {
                n = tmp + rev;
                c++;
            }
            
            

        }
        
    }
    


    return 0;
}