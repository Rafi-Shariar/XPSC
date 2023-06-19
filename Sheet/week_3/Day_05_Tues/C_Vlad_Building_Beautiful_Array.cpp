#include<bits/stdc++.h>
using namespace std;
#define ll long long int
//https://codeforces.com/contest/1833/problem/C
int main(){

    int t; cin>>t;

    while (t--)
    {
        int n; cin>>n;
        int arr[n];

        for(int i=0; i<n; i++) cin>>arr[i];

        vector<int>evens,odds;

        for (int i = 0; i < n; i++)
        {
            if(arr[i]%2==0) evens.push_back(arr[i]);
            else odds.push_back(arr[i]);
        }

        sort(evens.begin(),evens.end());
        sort(odds.begin(),odds.end());

        bool pos_even = true, pos_odd=true;

        for (int i = 0; i < n; i++)
        {
            if(arr[i]%2!=0) continue;
            if(odds.empty() || odds[0]>=arr[i]){
                pos_odd = false;
                break;
            }
                   
        }

          for (int i = 0; i < n; i++)
        {
            if(arr[i]%2==0) continue;
            if(odds.empty() || odds[0]>=arr[i]){
                pos_even = false;
                break;
            }
                   
        }

        if( pos_even || pos_odd) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
        
        
        
    }
    


    return 0;
}