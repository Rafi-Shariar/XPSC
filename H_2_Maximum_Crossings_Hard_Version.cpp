#include <bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;;
template <typename T> using pbds = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t;
    cin >> t;
    while (t--)
    {
        int n; cin>>n;
        vector<int>v(n);
        for(int i=0; i<n; i++) cin>>v[i];
        int freq[200001]={0};

        int ans=0;
        pbds<int>p;

        for (int i = n-1; i >= 0; i--)
        {
            if(i==n-1) p.insert(v[i]);
            else {


             ans += p.order_of_key(v[i]);

             p.insert(v[i]);
             ans += freq[v[i]];

            }

                            


            freq[v[i]]++;
            
        }

    

        cout<<ans<<endl;
        
    }
 
    return 0;
}