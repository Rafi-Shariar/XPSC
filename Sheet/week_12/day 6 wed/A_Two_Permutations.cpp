#include<bits/stdc++.h>
using namespace std;
#define ll long long int
void fast(){
   ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
}

int main(){

    fast();

    int t; cin>>t;

    while (t--)
    {
        int a,b,n;
        cin>>n>>a>>b;

        if(a==b && b==n) cout<<"Yes"<<endl;
        else if( a+b <= n-2) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }
       

    return 0;
}