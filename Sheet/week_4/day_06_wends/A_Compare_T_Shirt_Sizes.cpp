#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){

    int t; cin>>t;

    while (t--)
    {
        string a,b;
        cin>>a>>b;

        int sa = a.size();
        int sb = b.size();

        char ca = a[sa-1];
        char cb = b[sb-1];

        char ans;

        if(a==b) ans = '=';
        else
        {
            if(ca == 'S' && ca==cb){

                if(sb<sa) ans = '<';
                else ans = '>';
                
            
            }

            else if(ca=='L' && cb=='L'){

                if(sa>sb) ans = '>';
                else ans = '<';

            }

            else if(ca<cb) ans = '>';
            else ans = '<';


        }

        cout<<ans<<endl;
        
    }
    


    return 0;
}