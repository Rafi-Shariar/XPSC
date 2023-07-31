#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){

    int t; cin>>t;

    while (t--)
    {
        int n; cin>>n;
        string s; cin>>s;
        
        bool ok = false;

        for (int i = 0; i < s.size()-1; i++)
        {
            string tmp;
            tmp += s[i];
            tmp += s[i+1];
            string s1 = s.substr(i+2);

            if(s1.find(tmp) != string::npos){
                ok = true;
            }

        }

        if(ok) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
            
                    
    }

    
    


    return 0;
}
//std::string::npos