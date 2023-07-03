#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
 
    int t; cin>>t;
 
   
    while (t--)
    {
        int n,h,m;
        cin>>n>>h>>m;

        int ans = INT_MAX;

        while (n--)
        {
            int hh, mm; cin>>hh>>mm;

            int c=0;
            int x = h , y = m;

            while (true)
            {
                if( x==hh && y == mm) break;
                c++;
                y++;

                if( y==60){
                    y=0;
                    x++;

                    if(x==24) x=0;
                }

            }

            ans = min(ans,c);

     
        }

        printf("%d %d\n",ans/60,ans%60);
        
 
        
    }
   
        
 
        
        
        
        
    
    
 
 
    return 0;
}