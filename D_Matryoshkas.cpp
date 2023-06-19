#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){

    int t; cin>>t;

    while (t--)
    {
        int n; cin>>n;
        vector<int>v;

        for (int i = 0; i < n; i++)
        {
            int a; cin>>a;
            v.push_back(a);
        }

        sort(v.begin(),v.end());

        int c=0;

        for (int i = 0; i < n-1; i++)
        {
            int val = v[i];
            int nxt = val+1;

            if(v[i+1]!=nxt) c++;
        }

        cout<<c+1<<endl;
        
        
    }
    


    return 0;
}