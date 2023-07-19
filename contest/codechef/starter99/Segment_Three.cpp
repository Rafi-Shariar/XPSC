#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){

    int t; cin>>t;

    while (t--)
    {
        int n; cin>>n;
        vector<ll>v(n);

        for(int i=0; i<n; i++) cin>>v[i];

        ll i=0,j=0;
        ll sum=0;
        ll c=0;

        while (i<= n-3 && j<n)
        {
            ll p=0;
            sum += v[j];
            if(j<2) {
                j++;
                continue;
            }
            else
            { 
             
                if(sum%3!=0)
                {
                    
                    
                    while (sum%3!=0)
                    {
                        sum+=1;
                        p++;
                    }
                    
                }
                  
            }
            v[j] = v[j] + p;
            c+=p;
            j++;
            sum -= v[i];
            i++;
            
        }


        cout<<c<<endl;
        sum=0;
        c=0;
        

    }
    


    return 0;
}