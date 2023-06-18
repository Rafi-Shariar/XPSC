#include<bits/stdc++.h>
using namespace std;
#define ll long long int
//https://codeforces.com/contest/1703/problem/D
int main(){

    int t; cin>>t;

    while (t--)
    {
        int n; cin>>n;

        string s[n];
        map<string,bool>mp;

        for (int i = 0; i < n; i++)
        {
            cin>>s[i];

            mp[s[i]] = true;
        }

        for (int i = 0; i < n; i++)
        {
            bool found = false;

            for (int j = 1; j < s[i].size(); j++)
            {
                string s1 = s[i].substr(0,j);
                string s2 = s[i].substr(j, s[i].size()-j);

                if(mp[s1] && mp[s2]) found = true;
            }

            if( found ) cout<<1;
            else cout<<0;
            
        }

        cout<<endl;
        
        
    }
    


    return 0;
}