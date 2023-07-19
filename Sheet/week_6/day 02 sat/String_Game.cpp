#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){

    int t; cin>>t;

    while (t--)
    {
        int n; cin>>n;
        string s; cin>>s;

        int ones=0,zeros=0;

        for (int i = 0; i < n; i++)
        {
            if(s[i]=='1')ones++;
            else zeros++;
        }

        int minn = min(ones,zeros);

        if(minn%2==0) cout<<"Ramos"<<endl;
        else cout<<"Zlatan"<<endl;
        
    }
    


    return 0;
}