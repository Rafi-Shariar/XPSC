#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){

    int t; cin>>t;

    while (t--)
    {
        int n,k;
        cin>>n>>k;

        vector<int>v(n);

        for (int i = 0; i < n; i++)
        {
            cin>>v[i];
            v[i]%=k;

            if(!v[i]) v[i]=k;
        }

        vector<int>idx(n);

        for( int i = 0; i<n; i++) idx[i] = i;

        sort(idx.begin(), idx.end());
      

        

          for (auto x : idx) {
            cout << x + 1 << ' ';
        }

        cout << endl;




        
    }
    


    return 0;
}