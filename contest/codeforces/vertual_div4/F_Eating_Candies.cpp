#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
 
    int t; cin>>t;
 
    while (t--)
    {
        int n; cin>>n;
 
        int arr[n+1];
        map<int,int>forward,backward;
        int sumation=0;
        
        for (int i = 1; i <= n; i++)
        {
            cin>>arr[i];
            sumation += arr[i];
            forward.insert({sumation, i});
        }
 
        int back_sum=0;
        int can=1;
 
        for (int i = n; i >= 1; i--)
        {
            back_sum += arr[i];
            backward.insert({back_sum , can});
            can++;
 
        }
 
        int maxx = 0;
 
        for(auto it : forward){
 
            int sum = it.first;
 
            if( backward.find(sum) != backward.end()){
 
                int f = it.second;
                int b = backward[sum];
 
                if( f+b <= n){
                    maxx = max(maxx, f+b);
                }
            }
        }
 
 
        cout<<maxx<<endl;
 
 
    }
    
 
 
    return 0;
}