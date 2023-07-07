#include<bits/stdc++.h>
using namespace std;
#define ll long long int
//https://codeforces.com/contest/1618/problem/B
int main(){

    int t; cin>>t;

    while (t--)
    {
        int n; cin>>n;
        vector<string>v(n-2);

        for (int i = 0; i < n-2; i++)
        {
            cin>>v[i];
        }

        string ans = v[0];

        bool found = false;

        for (int i = 1; i < n-2; i++)
        {
            if(ans.back() != v[i].front() ){
                found = true;
                ans += v[i];
            }
            else
            {
                ans += v[i].back();
            }
            
        }

        if(!found) ans += 'a';

        cout<<ans<<endl;
        



       
        

    }
    


    return 0;
}