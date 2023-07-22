#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){

   int n; cin>>n;

   if(n==1) cout<<"a"<<endl;
   else if(n==2) cout<<"aa"<<endl;
   else if(n==3) cout<<"bba"<<endl;
   else
   {
    int c=0; bool ok = true;
    
    for (int i = 1; i <= n; i++)
    {
        if(ok) {
            cout<<"a";
            c++;
        }else
        {
            cout<<"b";
            c++;
        }

        if(c==2 && ok){
            ok = false; c=0; 
            }
        else if(c==2 && !ok) {
            ok = true; 
            c=0;
            }
        
    }
    // cout<<"c"<<endl;
    
   }
   
    


    return 0;
}