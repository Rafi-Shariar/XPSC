#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){

    int n; cin>>n;
    vector<int>v(n);

    int freq[100000]={0};

    for (int i = 0; i < n; i++)
    {
        cin>>v[i];
        freq[v[i]]++;
    }

    sort(v.begin(),v.end());

    int mx = v[n-1];
     int mx2=0;

    for (int i = 1; i <= mx; i++)
    {
        if(freq[i]>0 && mx%i==0){

            freq[i]--;

            

        }
        if(freq[i]==1) mx2 = i;
    }

   

    // for (int i = 0; i <=mx; i++)
    // {
    //     if( freq[i]==1) mx2 = i;
    // }

    cout<<mx<<" "<<mx2<<endl;
    
    

   
    
    
    
    


    return 0;
}