#include<bits/stdc++.h>
using namespace std;
#define ll long long int
//https://codeforces.com/contest/1642/problem/C
int main(){

    int t; cin>>t;

    while (t--)
    {
        ll n,x; cin>>n>>x;

        vector<ll>v(n);

        for(int i=0; i<n; i++) cin>>v[i];

        sort(v.begin(),v.end());
        int c=0;

  //binary search
        for (int i = 0; i < n; i++)
        {
            if( v[i] != - 1){

                ll val = v[i] * x;
                int found = -1;

                int low = i+1, high = n-1;

            
                while (low<=high)
                {
                    int mid = low + (high-low)/2;

                    if(v[mid]==val){
                        found = mid;
                        high = mid - 1;
                    }

                    if(v[mid]<val){
                        low = mid + 1;
                    }else
                    {
                        high = mid-1;
                    }
                    
                }

                if(found == -1) c++;
                else
                {
                    v[found] = -1;
                }
                

            }
        }

        cout<<c<<endl;
        



       
        
        


    }
    


    return 0;
}