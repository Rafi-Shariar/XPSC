#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){

    int t; cin>>t;

    while (t--)
    {
        int n; cin>>n;
        vector<int>v(n);

        int sum=0;

        for (int i = 0; i < n; i++)
        {
           cin>>v[i];
           sum += v[i];
        }

        cout<< (sum + n - 1 ) / n <<endl; 

        
    }
    


    return 0;
}