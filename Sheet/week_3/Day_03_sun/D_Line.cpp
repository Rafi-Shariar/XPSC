#include<bits/stdc++.h>
using namespace std;
#define ll long long int
//https://codeforces.com/contest/1722/problem/D
int main(){

    int t; cin>>t;

    while (t--)
    {
        int n; cin>>n;

        string s; cin>>s;

        ll total = 0;
        vector<ll>v;
        
        for (int i = 0; i < n; i++)
        {
            int j = n-1-i;
            if(s[i] == 'L'){
                v.push_back(j-i);
                total +=i;
            }
            else
            {
                v.push_back(i-j);
                total += j;
            }
            
        }

        sort( v.begin(), v.end(), greater<int>());

        for (int i = 0; i < n; i++)
        {
            if( v[i] > 0){
                total += v[i];
            }

            cout<<total<<" ";
        }
        cout<<endl;
        
        
   
        

    }
    


    return 0;
}