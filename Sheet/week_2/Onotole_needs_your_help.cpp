#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){

    int n; cin>>n;

    vector<int>v;

    for (int i = 0; i < n; i++)
    {
        int a; cin>>a;
        v.push_back(a);
    }

    sort(v.begin(),v.end());

    for (int i = 0; i < n; i+=2)
    {
        if(v[i] != v[i+1]){
            cout<<v[i]<<endl;
            break;
        }
    }
    

    

   


    


    return 0;
}