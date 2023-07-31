#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){

    int t; cin>>t;

    while (t--)
    {
        int n; cin>>n;
        int arr[n+1];
        map<int,int>frwd,bck;

        int sum=0;

        for (int i = 1; i <= n; i++)
        {
            cin>>arr[i];
            sum += arr[i];
            frwd.insert({sum,i});
        }

        int sum2=0;
        int idx=1;

        for (int i = n; i >= 1; i--)
        {
            sum2 += arr[i];
            bck.insert({sum2,idx});
            idx++;

        }

        int mx =0;

        for(auto i : frwd){

            int cur_sum = i.first;

            if( bck.find(cur_sum) != bck.end() ){

                int f = i.second;
                int b = bck[ cur_sum];

                if(f+b<=n) mx = max(mx,f+b);
            }
        }

        cout<<mx<<endl;
        
        
    }
    


    return 0;
}