#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){

    int t; cin>>t;

    while (t--)
    {
        int n; cin>>n;
        vector<string>v(n);

        for(int i=0; i<n; i++ ) cin>>v[i];
        ll c = 0;

        for (int i = 0; i < n; i++)
        {
            string s  = v[i];
            char f = s[0], l = s[1];

            for (int j = i+1; j < n; j++)
            {

                string tmp = v[j];
                char a = tmp[0], b = tmp[1];

                if(a==f && b!=l) c++;
                if(b==l && a!=f) c++;
                
            }
            
        }

        cout<<c<<endl;
        
    }
    


    return 0;
}