#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){

    int t;
    cin>>t;

    while (t--)
    {
        int n;
        cin>>n;

        int arr[n];

        int minn = INT_MAX;

        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];

            minn = min(minn, arr[i]);
        }

        ll sum = 0;

        for (int i = 0; i < n; i++)
        {
            sum += arr[i] - minn;
        }

        cout<<sum<<endl;
        
        
    }
    


    return 0;
}