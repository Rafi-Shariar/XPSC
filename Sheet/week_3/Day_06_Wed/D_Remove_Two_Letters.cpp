#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){

    int t; cin>>t;

    while (t--)
    {
        int n; cin>>n;
        string s; cin>>s;

        set<string>st;

        for (int i = 0; i < n-1; i++)
        {
            string tmp;
            tmp += s.substr(0,i);
            tmp += s.substr(i+2,n-1);

            st.insert(tmp);
        }

        cout<<st.size()<<endl;
        
    }
    


    return 0;
}