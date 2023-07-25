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
        int freq[n+10]={0};
           vector<int>tiles;

        for(int i=0; i<n; i++){
            cin>>v[i];   
            freq[v[i]]++;
  
        }

     
        int sum=0;

        for (int i = 0; i < n+10; i++)
        {
            if( freq[i]>=k){
                tiles.push_back(i);
                
                int tmp = freq[i];

                int x = tmp/k;

                sum += (x*k);
            }
        }

        //  for (int i = 0; i < n+10; i++)
        // {
        //     cout<<i<<"--> "<<freq[i]<<endl;
        // }
        // cout<<endl;

        int f = v[0]; int end = v[n-1];

        bool found_f = false;
        bool found_end = false;

        // cout<<tiles.size()<<endl;

        // for (int i = 0; i < tiles.size(); i++)
        // {
        //     cout<<tiles[i]<<" ";
        // }
        // cout<<endl;
        

        for (int i = 0; i < tiles.size(); i++)
        {
            if(tiles[i]==f) found_f = true;

            if(tiles[i]==end) found_end = true; 
        }

        if(found_f && found_end){

            // int tmp = sum/k;

            if(sum%k==0) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;

        }
        else cout<<"NO"<<endl;
        

        


       
        
    }
    


    return 0;
}