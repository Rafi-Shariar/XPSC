#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){

    int t; cin>>t;

    while (t--)
    {
        int n; cin>>n;
        int arr[n];

        for( int i=0; i<n; i++) cin>>arr[i];

        vector< vector<int> > subsets;

        for (int i = 0; i < (1<<n); i++)
        {
            vector<int>v;
            for (int j = 0; j < n; j++)
            {
                if( (i & ( 1<<j) ) != 0) v.push_back(arr[j]);
            }

            subsets.push_back(v);
            
        }

        for (int i = 0; i < subsets.size(); i++)
        {
            for( auto val : subsets[i] ) cout<<val<<" ";
            cout<<endl;
        }
        

        
        
    }
    


    return 0;
}