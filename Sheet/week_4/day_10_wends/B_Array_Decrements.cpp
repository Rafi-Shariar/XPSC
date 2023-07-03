#include<bits/stdc++.h>
using namespace std;
#define ll long long int
//https://codeforces.com/contest/1690/problem/B
int main(){

    int t; cin>>t;

    while (t--)
    {
        int n; cin>>n;
        int a[n], b[n];

        for(int i=0; i<n; i++) cin>>a[i];
        for(int i=0; i<n; i++) cin>>b[i];

        bool pos = true;

        int dif = -1, zero_dif = -1;

        for (int i = 0; i < n; i++)
        {
            if(b[i]>a[i]){
                pos = false;
                break;
            }

            if(b[i]!=0){

                if(dif==-1) dif = a[i] - b[i];
                 else{
            
                if(a[i] - b[i] != dif){
                    pos = false;
                    break;
                }
                    
                 }
            
            }else
            {
                zero_dif = max(zero_dif, a[i]-b[i]);
            }
            
        }

        if(!pos) cout<<"NO"<<endl;
        else if( dif==-1 || zero_dif<=dif) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;


        
        
    }
    


    return 0;
}