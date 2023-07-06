#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){

    int t; cin>>t;

    while (t--)
    {
        int n; cin>>n;
        string s; cin>>s;

        int c =0;

        bool cl = false;

        for (int i = 0; i < n; i++)
        {
            if(s[i]==':' ){

                if(!cl) cl = true;
                else if(s[i-1]==':') continue;
                else
                {
    
                    c++;

                }
       

            }
            else if(s[i]=='('){

                cl = false;
            }

        }

        cout<<c<<endl;
        
    }
    


    return 0;
}