#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){

    int t; cin>>t;

    while (t--)
    {
        int n,m,k,h;
        cin>>n>>m>>k>>h;

        int c=0;

        for (int i = 0; i < n; i++)
        {
            int a; cin>>a;

            int tmp = abs(a-h);
            int x = tmp/k;

            if(tmp!=0 &&  (x*k)==tmp && tmp<=(m-1)*k) {
                c++;  
            }
        }
 

        cout<<c<<endl;
        
    }
    


    return 0;
}