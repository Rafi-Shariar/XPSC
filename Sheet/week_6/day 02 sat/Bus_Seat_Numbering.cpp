#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){

    int t; cin>>t;

    while (t--)
    {
        int n; cin>>n;

        if(n<16){

            if(n<11) cout<<"Lower Double"<<endl;
            else cout<<"Lower Single"<<endl;

        }
        else
        {
            if(n<26) cout<<"Upper Double"<<endl;
            else cout<<"Upper Single"<<endl;
            
        }
        
    }
    


    return 0;
}