#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){

    int n; cin>>n;

    map<int,ll>pre;

    for (int i = 0; i < n; i++)
    {
        int a,b;
        cin>>a>>b;

        pre[a]++;
        pre[b+1]--;
    }

    ll sum=0, ans=0;

    for(auto i : pre){
        sum += i.second;

        ans = max(ans,sum);

    }

    if(ans<=2) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    

  
   
   



   
    


    return 0;
}