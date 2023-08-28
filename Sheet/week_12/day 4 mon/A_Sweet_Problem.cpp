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
        vector<int>v(3);
        for( int i=0; i<3; i++) cin>>v[i];
        sort(v.begin(), v.end());
        
        int cur = v[0] + v[1];
        int sum = v[0] + v[1] + v[2];

        if(cur>= v[2] )  cout<<sum/2<<endl;
        else cout<<v[0] + v[1]<<endl;




    }
       

    return 0;
}