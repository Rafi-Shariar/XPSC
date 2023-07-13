#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){

    int t; cin>>t;

    while (t--)
    {
        int arr[3]={0};

        int n; cin>>n;

        for (int i = 0; i < n; i++)
        {
            int x; cin>>x;
            arr[x%3]++;
        }

        int res = arr[0];
        int mn = min(arr[1],arr[2]);
        res += mn;

        arr[1] -= mn;
        arr[2] -= mn;

        res += (arr[1] + arr[2])/3;

        cout<<res<<endl;

        

         

        
    }
    


    return 0;
}