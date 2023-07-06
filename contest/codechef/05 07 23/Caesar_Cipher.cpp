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

        // int k = 0;

        char ca = a[0];
        char cb = b[0];

        // for (int i = 0; i < 26; i++)
        // {
        //     if(ca!=cb){
        //         k++;
        //         ca++;
        //     }
        // }

        int k = (b[0] - a[0]) % 26;

        // cout<<k<<endl;
        

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