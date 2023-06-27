#include<bits/stdc++.h>
using namespace std;
#define ll long long int

ll stringToInt(string& s)
{
    ll ans = 0;
    for (int i = 0; i < s.size(); i++)
        ans = ans * 10 + (s[i] - '0');
    return ans;
} 

int main(){

    int t; cin>>t;

    while (t--)
    {
        int n; cin>>n;
        string s; cin>>s;
        vector<char>v;

        int i = n-1;

        ll ans;

        while (i>=0)
        {
            
            
            if(s[i]=='0'){
                string tmp;
                // tmp += s[i-1];
                // tmp += s[i-2];

                tmp.push_back(s[i-1]);
                tmp.push_back(s[i-2]);

                reverse(tmp.begin(),tmp.end());

                 ans = stringToInt(tmp);
                i-=3;
            }else
            {
                string tmp;
                // tmp +=s[i];
                tmp.push_back(s[i]);
                ans = stringToInt(tmp);

                i--;

                
            }

            char ch = ans + 96;

            v.push_back(ch);
            
        }

        reverse(v.begin(),v.end());

        for(auto i : v) cout<<i;
        cout<<endl;
        

    }
    


    return 0;
}