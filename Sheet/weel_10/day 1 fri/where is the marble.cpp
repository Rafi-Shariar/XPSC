#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){

    int n,q,ca=1;

    while (cin>>n>>q)
    {
        if(n==0 && q==0) break;

        vector<int>v(n);

        for(int i=0; i<n; i++) cin>>v[i];

        sort(v.begin(),v.end());

        printf("CASE# %d:\n",ca);
        ca++;        

        while (q--)
        {
            int x; cin>>x;

            int ans = -1;
            int l = 0, r = n-1;
            
            while (l<=r)
            {
               int mid = l + (r-l)/2;
               if(v[mid]==x){
                ans = mid;
                r = mid - 1;
               }
               else if( x> v[mid]) l = mid + 1;
               else r = mid - 1;
            }

            if(ans == -1)  cout<< x <<" not found"<<endl;
            else cout<<x<<" found at "<<ans+1<<endl;
            
        }
        
    }
    
    


    return 0;
}