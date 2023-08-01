#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
 
    int t; cin>>t;
 
    while (t--)
    {
        int n; cin>>n;
        vector<int>v(n+1);
 
        int c=0;
 
        for( int i=1; i<=n; i++ ){
            cin>>v[i];
            if(v[i]==i) c++;
        }
 
        if(c==0) cout<<0<<endl;
        else if(c%2==0) cout<<c/2<<endl;
        else cout<< (c/2) +1<<endl;
 
        
 
    }
    
 
 
    return 0;
}