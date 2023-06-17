#include<bits/stdc++.h>
using namespace std;
#define ll long long int

//https://codeforces.com/contest/1692/problem/C

int main(){

    int t; cin>>t;

    while (t--)
    {
        char arr[9][9];

        for (int i = 1; i <= 8; i++)
        {
            for (int j = 1; j <= 8; j++)
            {
                char ch; cin>>ch;
                arr[i][j] = ch;
            }
            
        }

        int x,y;

        for (int i = 2; i <=7; i++)
        {
            for (int j = 2; j <= 7; j++)
            {
                if(arr[i][j]=='#'){

                    if( arr[i-1][j-1]=='#' && arr[i-1][j+1]=='#' && arr[i+1][j-1]=='#' && arr[i+1][j+1]=='#'){
                        x=i;
                        y=j;
                    
                    }
                }
            }
            
        }

        cout<<x<<" "<<y<<endl;
        

        

    }
    


    return 0;
}