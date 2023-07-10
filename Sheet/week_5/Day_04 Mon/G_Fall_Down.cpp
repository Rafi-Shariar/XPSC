#include<bits/stdc++.h>
using namespace std;
#define ll long long int
//https://codeforces.com/contest/1669/problem/G
int main(){

    int t; cin>>t;

    while (t--)
    {
        int r,c; cin>>r>>c;

        char arr[r][c];

        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++)
            {
                cin>>arr[i][j];
            }
            
        }

        // cout<<endl<<endl;

 
        

        for (int i = r-2; i >=0; i--)
        {
            for (int j = 0; j < c; j++)
            {
                if(arr[i][j]=='*' ){
                    int row = i;
                    arr[i][j] = '.';

                    while (row<r )
                    {
                        if( arr[row+1][j]=='*') break;
                        else if( arr[row+1][j]=='o') break;
                        else if (row == r-1 ) break;
                       
                        

                        row++;
                    }

                    arr[row][j]='*';

                   
                    
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