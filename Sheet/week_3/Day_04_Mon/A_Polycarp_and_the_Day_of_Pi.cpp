#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){

    int t; cin>>t;
    string pi = "314159265358979323846264338327";
    while (t--)
    {
        string s; cin>>s;

        int c = 0;

        for (int i = 0; i < s.size(); i++)
        {
            if( s[i]==pi[i]) c++;
            else
            {
                break;
            }
            
        }

        cout<<c<<endl;
        
        
    }
    


    return 0;
}