#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){

    int t; cin>>t;

    while (t--)
    {
        int n; cin>>n;
        string s; cin>>s;
        string ans;
        int c=1;


        for(int i=0; i<s.size(); i++){

            if(s[i]==s[i+1]) c++;
            else
            {
                if(c%2==0) cout<<s[i]<<s[i];
                else cout<<s[i];
                c=1;
            }
            
        }

       

        cout<<ans<<endl;
        


    }
    


    return 0;
}