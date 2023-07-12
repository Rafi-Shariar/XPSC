#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){

    int t; cin>>t;

    while (t--)
    {
        int n; cin>>n;
        string s; cin>>s;

        if(n%3==1){
            cout<<"YES"<<endl;
            continue;
        }

        bool pos = false;

        for (char ch = 'a'; ch <= 'z'; ch++)
        {
          int f = n + 1 , l = -1;

          for (int i = 0; i < n; i++)
          {
             if(i%3==0 && s[i]==ch){
                f = i;
                break;
             }
          }

          for (int i = n-1; i >= 0; i--)
          {
             int x = n - 1 - i;

             if(x%3==0 && s[i]==ch){
                l = i;
                break;
             }
          }

          if(f<l){
            pos = true;
            break;
          }
          
          
        }

        if(pos) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
        
    }
    


    return 0;
}