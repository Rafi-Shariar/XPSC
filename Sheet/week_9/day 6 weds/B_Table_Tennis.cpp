#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){

    ll n,k;
    cin>>n>>k;
    \
    deque<ll>d;
    
    for (int i = 0; i < n; i++)
    {
        ll a; cin>>a;
        d.push_back(a); 
    }

    ll c = 0;


    while (!d.empty())
    {
        int cur = d.front();
        d.pop_front();

        if(d.empty()){
            cout<<cur<<endl;
            return 0;
        }

        ll now = 0;

        while (cur>=d.front() && !d.empty())
        {
           // cout<<d.front()<<" ";
           d.pop_front();
           now++;

           if(now==k || d.empty()){
            cout<<cur<<endl;
             return 0;
           }
        }




    }
    
    
    


    return 0;
}