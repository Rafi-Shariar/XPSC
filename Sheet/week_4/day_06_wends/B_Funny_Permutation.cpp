#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){

    int t; cin>>t;

    while (t--)
    {
        int n; cin>>n;

        if(n==3) cout<<-1<<endl;
        else if(n==5){
            printf("3 4 5 1 2\n");
        }
        else
        {
           vector<int>v;
           
           for (int i = n; i >= 1; i--)
           {
             v.push_back(i);
           }

           if(n%2==0){

            for(auto i : v) cout<<i<<" ";
            cout<<endl;
           }
           else
           {
             int mid = n/2;
             int mid2 = mid + 1;

             swap(v[mid],v[mid2]);

             for(auto i : v) cout<<i<<" ";
            cout<<endl;
           }
           
           
            
        }
        
    }
    


    return 0;
}