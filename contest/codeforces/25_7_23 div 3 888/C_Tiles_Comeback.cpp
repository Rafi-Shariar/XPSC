#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){

    int t; cin>>t;

    while (t--)
    {
        int n,k;
        cin>>n>>k;

        vector<int>v(n);
        int freq[200000]={0};

        for (int i = 0; i < n; i++)
        {
           cin>>v[i];
           freq[ v[i]]++;
        }

        int f = v[0]; int l=v[n-1];

        if(f==l){
            int c = freq[l];
            
            if(c>=k) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
            continue;
        }

        int fc=0, lc=0;
        int f_idx=0, l_idx=0;

        for (int i = 0; i < n; i++)
        {
            if(v[i]==f) fc++;

            if(fc==k){

                f_idx=i;
                break;
            }
        }

       

        for (int i = n-1; i >= 0; i--)
        {
            if(v[i]==l) lc++;

            if(lc==k){
            l_idx = i;
            break;
            }
        }

        if(fc<k || lc<k){
            cout<<"NO"<<endl;
            continue;
        }

        if(f_idx<= l_idx) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
        
        

        
        
        
    }
    


    return 0;
}