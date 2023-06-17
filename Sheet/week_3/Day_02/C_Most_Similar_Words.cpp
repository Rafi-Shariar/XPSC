#include<bits/stdc++.h>
using namespace std;
#define ll long long int
//https://codeforces.com/contest/1676/problem/C

int count(string a, string b){

    int sz = a.size();
    int sum=0;

    for (int i = 0; i <sz; i++)
    {
        if( a[i]==b[i])continue;
        else
        {
            int m = a[i], ex = b[i];

            if(m>ex) sum += (m-ex);
            else sum+= (ex -m);
        }
        
    }

    return sum;
    
}
int main(){

    int t; cin>>t;
    while (t--)
    {
        int n,m; 
        cin>>n>>m;

        vector<string>v;

        for (int i = 0; i < n; i++)
        {
            string s; cin>>s;
            v.push_back(s);
        }

        int minn = INT_MAX;

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if(i==j) continue;
                
                int ans = count(v[i],v[j]);

                minn = min(ans,minn);
            }
            
        }

        cout<<minn<<endl;
        
        
    }
    


    return 0;
}