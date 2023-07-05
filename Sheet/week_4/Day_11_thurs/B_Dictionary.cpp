#include<bits/stdc++.h>
using namespace std;
#define ll long long int
//https://codeforces.com/contest/1674/problem/B
int main(){

    int t; cin>>t;

    while (t--)
    {
        string s; cin>>s;

        int f_ch = s[0] - 'a' ;
        int l_ch = s[1] - 'a' ;

        int ans;


        if(f_ch > l_ch){

             ans = (25 * f_ch) + (l_ch + 1);
        }else
        {
            ans = (25 * f_ch) + (l_ch);
        }

        cout<<ans<<endl;
        

        


    }
    


    return 0;
}