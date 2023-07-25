#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){

    int t; cin>>t;

    while (t--)
    {
        int n; cin>>n;

        int arr[n+1][n+1];

        int val = 1;

        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n; j+=2)
            {
                arr[i][j] = val;
                val++;
            }
            
        }

        for (int i = 1; i <= n; i++)
        {
            for (int j = 2; j <= n; j+=2)
            {
                arr[i][j] = val;
                val++;
            }
            
        }

        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                cout<<arr[i][j]<<" ";
            }
            cout<<endl;
            
        }
        
        
        
    }
    


    return 0;
}