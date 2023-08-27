#include<bits/stdc++.h>
using namespace std;
#define ll long long int
void fast(){
   ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
}

int main(){

    fast();

    int t; cin>>t;

    while (t--)
    {
        int n; cin>>n;
        string s; cin>>s;

        int ans =0; int cur=0;

        for (int i = 0; i < s.size(); i++)
        {
            if(s[i]=='(') cur++;
            else
            {
                cur--;

                if(cur<0){
                    cur=0;
                    ans++;
                }
            }
            
        }


        cout<<ans<<endl;
        
    }
       

    return 0;
}