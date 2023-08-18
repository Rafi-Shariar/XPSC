#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){

    int t; cin>>t;

    while (t--)
    {
        int n; cin>>n;
        vector<int>v(n);
        for(int i=0; i<n; i++) cin>>v[i];


        int k = 1;
        if(v[0]==1) k++;
        for (int i = 1; i < n; i++)
        {
           if(v[i]==0){
             if(v[i]==v[i-1]){
                k = -1;
                break;
             }
           }
           else
           {
              if(v[i]==v[i-1]) k += 5;
              else k++;
           }
           
        }

        cout<<k<<endl;
        
    }
    


    return 0;
}