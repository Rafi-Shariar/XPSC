#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){

    int n; cin>>n;

    vector<int>v(n);

    for (int i = 0; i < n; i++)
    {
        cin>>v[i];
    }

    sort(v.begin(),v.end());

    int a = v[n-1];
    int b = v[n-2];
    int c = v[0];
    int d = v[1];

    int ans = min(a-d , b-c);

    cout<<ans<<endl;



    


    return 0;
}