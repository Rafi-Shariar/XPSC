#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){

    int t; cin>>t;

    while (t--)
    {
      int arr[4];
      for(int i=0; i<4; i++) cin>>arr[i];

      bool pos = true;

      for (int i = 0; i < 4; i++)
      {
        int sum =0;
        for (int j =0; j < 4; j++)
        {
            if(i==j) continue;
            sum += arr[j];
            
        }

        if(arr[i]>sum) pos = false;
        
      }

      if(pos) cout<<"NO"<<endl;
      else cout<<"YES"<<endl;
      



    }
    


    return 0;
}