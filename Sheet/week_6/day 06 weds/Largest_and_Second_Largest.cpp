#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){

    int t; cin>>t;

    while (t--)
    {
        int n; cin>>n;
        vector<int>v;
        int freq[1010] = {0};

        for (int i = 0; i < n; i++)
        {
            int a; cin>>a;

            if(freq[a]==0){
                v.push_back(a);
                freq[a] = 1;
            }
        }

        sort(v.begin(),v.end());

        cout<<v[v.size()-1] + v[v.size()-2]<<endl;
        
    }
    


    return 0;
}