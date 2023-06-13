#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){

    int n,x;
    cin>>n>>x;

    vector<int>v;

    for (int i = 0; i < n; i++)
    {
        int a; cin>>a;

        if(a!=x) v.push_back(a);
    }

    for(auto i : v) cout<<i<<" ";
    cout<<endl;
    


    return 0;
}