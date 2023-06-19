#include<bits/stdc++.h>
using namespace std;
#define ll long long int
//https://codeforces.com/contest/1772/problem/B
int main(){

    int t; cin>>t;

    while (t--)
    {
        int arr[2][2];

        for(int i=0; i<2; i++)
            for(int j=0; j<2; j++) cin>>arr[i][j];
    
       bool pos = false;

       for (int i = 0; i < 4; i++)
       {
          int x1y1 = arr[0][0];
          int x1y2 = arr[0][1];
          int x2y1 = arr[1][0];
          int x2y2 = arr[1][1];

          if(x1y1 < x1y2 && x2y1 < x2y2 && x1y1 < x2y1 && x1y2<x2y2) pos = true;
          else
          {
             int a = arr[0][0];
             int b = arr[0][1];
             int d = arr[1][0];
             int c = arr[1][1];

             arr[0][0] = d;
             arr[0][1] = a;
             arr[1][0] = c;
             arr[1][1] = b;
           
          }
          
       }

       if(pos) cout<<"YES"<<endl;
       else cout<<"NO"<<endl;
       

    }
    


    return 0;
}