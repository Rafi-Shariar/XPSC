#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){

    int t; cin>>t;

    while (t--)
    {
        int n; cin>>n;
        int arr[n];
        for(int i=0; i<n; i++) cin>>arr[i];
        bool ok = false;

        for (int i = 0; i < n; i++)
        {
            for (int j = i+1; j < n; j++)
            {
                for (int k = j+1; k < n; k++)
                {
                    if( (arr[j]-arr[i]) == (arr[k]-arr[j])) ok = true;
                }
                
            }
            
        }

        if(ok) cout<<"No"<<endl;
        else cout<<"Yes"<<endl;
        
    }
    


    return 0;
}