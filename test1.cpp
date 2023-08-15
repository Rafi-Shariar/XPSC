#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){

  int n; cin>>n;
  int c=0;

  for (int i = 1; i <=n; i++)
  {
     for (int j = i; j <= n; j++)
     {
        int c = (i*i) + (j*j);
        c = c*c;

        int c_sq = sqrt(c);
        int cur = c_sq * c_sq;

        cout<<c<<" "<<c_sq<<" "<<cur<<endl;

        if( cur == c && c_sq<=n) c++;
     }
     
  }

  cout<<c<<endl;
  


    return 0;
}