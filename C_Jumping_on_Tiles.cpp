#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){

    int t; cin>>t;

    while (t--)
    {
        string s; cin>>s;
        int n = s.size();

        vector<pair<char,int>>v;

        char mn = min(s[0],s[n-1]);
        char mx = max(s[0], s[n-1]);

        for(int i=1; i<n-1; i++){

            if( s[i]>=mn && s[i]<=mx) v.push_back({s[i],i+1});
        }

        sort(v.begin(),v.end());

        cout<<1<<" ";
        for (int i = 0; i < v.size(); i++)
        {
            cout<<v[i].second<<" ";
        }

        cout<<n<<endl;
         


    }
    


    return 0;
}