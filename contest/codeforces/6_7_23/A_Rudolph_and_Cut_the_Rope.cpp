#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){

    int t; cin>>t;

    while (t--)
    {
        int n; cin>>n;
        int c=0;

        for (int i = 0; i < n; i++)
        {
            int a,b;
            cin>>a>>b;

            if(a>b) c++;
        }

        cout<<c<<endl;

         int times[n][m];
        
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin>>times[i][j];
            }
            
        }
        
    }
    


    return 0;
}