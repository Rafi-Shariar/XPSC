#include<bits/stdc++.h>
using namespace std;
#define ll long long int
//https://codeforces.com/contest/1843/problem/B
int main(){

    int t; cin>>t;

    while (t--)
    {
        int n; cin>>n;
        vector<ll>v;

        ll sum = 0;

        for (int i = 0; i < n; i++)
        {
            int a; cin>>a;
            sum += abs(a);
            v.push_back(a);
        }

      bool neg=true;
      if(v[0]<0) neg = true;
      else neg = false;

      int i=0,c=0;

      while (i<n)
      {
        if(neg && v[i]>0){

            c++;
            neg=false;
        }

        if(!neg && v[i]<0) neg = true;
        i++;

      }

      if(neg) c++;

      cout<<sum<<" "<<c<<endl;
      
        

    }
    


    return 0;
}