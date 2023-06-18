#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){

    int t; cin>>t;
    while (t--)
    {
        int n; cin>>n;
        int arr[n];

        for (int i = 1; i <= n; i++)
        {
            cin>>arr[i];
        }

        int count=0;

        for (int i = 1; i <= n; i++)
        {
            for (int j = i+1; j <= n; j++)
            {
                if (arr[i] < i && i < arr[j] && arr[j] < j ) count++;
            }
            
        }

        cout<<count<<endl;
        
        
    }
    


    return 0;
}