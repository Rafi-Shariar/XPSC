#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){

    int t; cin>>t;

    while (t--)
    {
        int n; cin>>n;

        string a,b,c;
        cin>>a>>b>>c;
        vector<char>v;

        string ans;

        int k=0;

        if(a[0]<b[0]){

            k = b[0] - a[0];
        }else if( a[0]>b[0])
        {
            k = 122 - a[0] + b[0];
        }

        cout<<k<<endl;

        for (int i = 0; i < n; i++)
        {
            char ch = c[i];

            ch = ch + k;

            if( (int)ch>122){

                ch = ch - 122;
                ch += 96;

            }

            // v.push_back(ch);
            ans += ch;
        }

        // for(auto i : v) cout<<i;
        cout<<ans;
        cout<<endl;
        
        
    }
    


    return 0;
}