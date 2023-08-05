#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){

    int t; cin>>t;

    while (t--)
    {
        int n,k;
        cin>>n>>k;



    vector<int>v;
 

    int m = n, l = 1;

    while(v.size()<=n){
        v.push_back(m);
        if(v.size()==n) break;
        v.push_back(l);
        if(v.size()==n) break;
        m--;
        l++;
    }

    for(auto i : v) cout<<i<<" ";
    cout<<endl;
    
    }
    


    return 0;
}