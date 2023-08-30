#include<bits/stdc++.h>
using namespace std;
#define ll long long int
void fast(){
   ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
}

int main(){

    fast();

   int n; cin>>n;
   vector<int>v(n);
   for(int i=0; i<n; i++) cin>>v[i];

   int ans,x;

   for (int i = 1; i <=100; i++)
   {
     int tmp = 0;

     for (int j = 0; j < n; j++)
     {
        int dis = abs( v[j] - i);
        if(dis>=1) tmp += dis-1;
     }

     if( tmp < ans){
        ans = tmp;
        x=i;
     }
     
   }

   cout<<x<<" "<<ans<<endl;
   
       

    return 0;
}