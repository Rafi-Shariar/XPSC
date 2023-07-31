#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
 
    int t; cin>>t;
 
    while (t--)
    {
        int r,c; cin>>r>>c;
 
        char arr[r][c];
 
        for (int i = 0; i < r; i++)
            for (int j = 0; j < c; j++) cin>>arr[i][j];
            

        for (int i = r-2; i >=0; i--)
        {
            for (int j = 0; j < c; j++)
            {
                if(arr[i][j]=='*' ){
                    int rr = i;
                    arr[i][j] = '.';
 
                    while (rr<r )
                    {
                        if( arr[rr+1][j]=='*') break;
                        else if( arr[rr+1][j]=='o') break;
                        else if (rr == r-1 ) break;
                       
                        rr++;
                    }
 
                    arr[rr][j]='*';
   
                }
            }
            
        }
 
        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++)
            {
                cout<<arr[i][j];
            }
            cout<<endl;
            
        }
       
   
        
    }
    
 
 
    return 0;
}