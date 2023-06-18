#include<bits/stdc++.h>
using namespace std;
#define ll long long int

// https://codeforces.com/contest/1676/problem/D
int main(){

    int t; cin>>t;
    while (t--)
    {
        int n,m;
        cin>>n>>m;

        int arr[n][m];

       for (int i = 0; i < n; i++)
       {
         for (int j = 0; j < m; j++)
         {
            cin>>arr[i][j];
         }
         
       }
       
        int maxxi = 0;

        for (int i = 0; i < n; i++)
        {
            

            for (int j = 0; j < m; j++)
            {
                int x=i, y=j;
                
                int now = 0;

                while ( x>=0 && y>=0 )
                {
                    now += arr[x][y];
                    x--;
                    y--;
                }

                x=i, y=j;

                while (x>=0 && y<m)
                {
                    now += arr[x][y];
                    x--;
                    y++;
                }

                x=i, y=j;

                while (x<n && y>=0)
                {
                    now += arr[x][y];
                    x++;
                    y--;
                }

                x=i, y=j;

                while (x<n && y<m)
                {
                    now += arr[x][y];
                    x++;
                    y++;
                }

                now -= arr[i][j]*3;

                maxxi = max(maxxi,now);
                
                    
            }
            
        }


        cout<<maxxi<<endl;   
    }
    


    return 0;
}