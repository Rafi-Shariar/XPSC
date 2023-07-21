#include<bits/stdc++.h>
#include <string>
using namespace std;
#define ll long long int
int main(){

    int t; cin>>t;
    

    while (t--)
    {
        
        int n; cin>>n;
        cin.ignore();
       
        char s[n];

        for (int i = 0; i < n; i++)
        {
            cin>>s[i];
        }

        // for(auto i : s) cout<<i<<" ";
        // cout<<endl;
        

        int sz = n;

        if(sz==1){
            cout<<"Ramos"<<endl;
            continue;
        }

        if(sz==2){

            if(s[0]==s[1]) cout<<"Ramos"<<endl;
            else cout<<"Zlatan"<<endl;
            continue;
        }

        vector<pair<char,char>>v;

        for (int i = 0; i < sz; i+=2)
        {
            if(i==sz-1){
                v.push_back({s[i],'5'});
                continue;
            }

            v.push_back({s[i] , s[i+1]});

        }

        for (int i = 0; i < v.size(); i++)
        {
            char a = v[i].first; char b =v[i].second;

            if(a!=b){

                if(i%2==0) cout<<"Zlatan"<<endl;
                else cout<<"Ramos"<<endl;

                break;
            }
        }
        
        
        
    }
    


    return 0;
}