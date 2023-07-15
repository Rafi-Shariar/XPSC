#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){

    int t; cin>>t;

    while (t--)
    {
        int n; cin>>n;
        cin.ignore();
        string s; cin>>s;

        int a=0,b=0;

        int tmp = 'A';

        for (int i = 0; i < s.size(); i++)
        {
            if(tmp=='A' && s[i]==tmp){
                a++;
            }
            else if(tmp=='B' && s[i]==tmp) b++;
            else
            {
                if(tmp=='A') tmp = 'B';
                else tmp = 'A';
            }
            
        }

        cout<<a<<" "<<b<<endl;
        
    }
    


    return 0;
}