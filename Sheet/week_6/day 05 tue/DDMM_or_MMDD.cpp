#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){

    int t; cin>>t;

    while (t--)
    {
   
        string s; cin>>s;

        int a = 10 * (s[0]-'0');
        a += (s[1] - '0' );

        int b = 10 * ( s[3] - '0');
        b += (s[4] - '0');

        if( (a > 12) && (b <= 12) ) cout<<"DD/MM/YYYY"<<endl;
        else if ( (a <= 12) && (b > 12)) cout<<"MM/DD/YYYY"<<endl;
        else cout<<"BOTH"<<endl;
       
  
    }
    


    return 0;
}
