#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){

    int n; cin>>n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    

    int t; cin>>t;
    while (t--)
    {
        int i,j;
        cin>>i>>j;

        int sum=0;

        for (int a = i; a <= j; a++)
        {
           sum+=arr[a];
        }

        cout<<sum<<endl;
        
    }
    


    return 0;
}