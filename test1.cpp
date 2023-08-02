#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){

    int t; cin>>t;

    while (t--)
    {
        int n; cin>>n;
       deque<int>d;

       for (int i = 0; i < n; i++)
       {
         int a; cin>>a;
         d.push_back(a);
       }

       while (!d.empty())
       {
          cout<<d.front()<<" ";
          d.pop_front();
          cout<<d.back()<<" ";
          d.pop_back();
       }

       cout<<endl;
       
       
       
        
        
    }
    


    return 0;
}