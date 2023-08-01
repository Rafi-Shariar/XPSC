#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){

    int t; cin>>t;

    while (t--)
    {
        int n; cin>>n;
        string s; cin>>s;

        int freq[26];

        for(int i=0;  i<26; i++ ) freq[i] = -1;

        bool ans = true;

        for (int i = 0; i < n; i++)
        {
            int c = (int)(s[i] -'a');

            if( freq[c] == -1) freq[c] = (i%2);
            else
            {
                if(freq[c] != (i%2) ){
                    ans = false;
           
                }
            }
            

        }

        if(ans) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
        
    }
    


    return 0;
}