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
        int n; cin>>n;
        vector<int>v(n+1);
        for(int i=1; i<=n; i++) cin>>v[i];
        bool pos = true;

        if(v[1] != n) pos = false;

        vector<int>b;
        for (int i = n; i >= 1; i--)
        {
           while (b.size() < v[i])
           {
             b.push_back(i);
           }
           
        }


        for (int i = 1; i <=n; i++)
        {
            if( v[i] != b[i-1]) pos = false;
        }

        if(pos) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
        


        
    }
       

    return 0;
}