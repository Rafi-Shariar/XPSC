#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){

    int t; cin>>t;

    while (t--)
    {
        int n; cin>>n;

        int freq[1505]={0};

        vector<int>a(n),d(n);

        for(int i=0; i<n; i++){
            cin>>a[i];

            freq[a[i]]++;
        }

        for (int i = 0; i < n; i++)
        {
            cin>>d[i];

            freq[d[i]]++;
        }

        int mx = 1;

        for (int i = 0; i <=1500; i++)
        {
            mx = max(mx,freq[i]);
        }

        cout<<mx<<endl;
        
        
    }
    


    return 0;
}