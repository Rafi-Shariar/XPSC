#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){

    int n; cin>>n;

    string s; cin>>s;

    map<string,int>mp;

    for (int i = 0; i < n-1; i++)
    {
       string tmp;
       tmp += s[i];
       tmp += s[i+1];

       mp[tmp] += 1;
        
    }

    string ans;
    int minn = INT_MIN;

    for(auto i : mp){

        if(i.second > minn){
            ans = i.first;
            minn = i.second;
        }
    }

    cout<<ans<<endl;
    
    

    return 0;
}