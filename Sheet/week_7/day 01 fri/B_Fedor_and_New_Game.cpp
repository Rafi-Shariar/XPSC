#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int count(int n){

    int cnt=0;

    while (n)
    {
        cnt += (n&1);
        n>>=1;
    }

    return cnt;
    
}
int main(){

    int n,m,k;
    cin>>n>>m>>k;

    vector<int>v(m+1);

    for (int i = 0; i < m+1; i++)
    {
        cin>>v[i];
    }

    int val = v[m];
    int ans=0;

    for (int i = 0; i < m; i++)
    {
        int x = val ^ v[i];

        if(count(x) <= k) ans++;

    }

    cout<<ans<<endl;
    
    
    


    return 0;
}