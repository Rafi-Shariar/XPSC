#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){

    int t; cin>>t;

    while (t--)
    {
        int n; cin>>n;

        vector<int>v(n);

        int arr[101]={0};

        for (int i = 0; i < n; i++)
        {
            cin>>v[i];
            arr[v[i]]++;
        }

        int val = 0;

        for (int i = 0; i < 101; i++)
        {
            if(arr[i]==1){
                val = i;
                break;
            }
        }

        for (int i = 0; i < n; i++)
        {
            if(v[i]==val){
                cout<<i+1<<endl;
                break;
            }
        }
        
        
        
    }
    


    return 0;
}