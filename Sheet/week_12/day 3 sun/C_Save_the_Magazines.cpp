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
        string s; cin>>s;
        vector<ll>v(n);
        for( int i=0; i<n; i++) cin>>v[i];

        ll sum=0;

        for (int i = 0; i < n; i++)
        {
            if( s[i]=='1'){
                vector<int>t;
                bool pos = false;
                if(i>0){
                    t.push_back(v[i-1]);
                    pos = true;
                }

                int j=i;

                while( s[j]=='1' && j<n){
                    t.push_back(v[j]);
                    j++;
                }

                sort(t.begin(), t.end());

                if(!pos) sum += t[0];

                for(int ii = 1; ii<t.size(); ii++) sum += t[ii];
                i = j;
            }

        
        }
            cout<<sum<<endl;
        


    }
       

    return 0;
}