#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){

   vector<int>v(4);

   for(int i=0; i<4; i++) cin>>v[i];

   sort(v.begin(),v.end());

   int mx = v[3];
   int mx2 = v[2];

   int a = mx - mx2;

   int b = v[0] - a;
   int c = v[1] - a;

//    for (int i = 0; i < 2; i++)
//    {
//      for (int j = 0; j < 2; j++)
//      {
        

//      }
     
//    }


  cout<<a<<" "<<b<<" "<<c<<endl;
   
   



    return 0;
}