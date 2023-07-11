#include<bits/stdc++.h>
using namespace std;
#define ll long long int
//https://codeforces.com/contest/1472/problem/B
int main(){

    int t; cin>>t;

    while (t--)
    {
        int n; cin>>n;
        int freq[3]={0};
        int total= 0;

        for (int i = 0; i < n; i++)
        {
            int a; cin>>a;
            freq[a]++;
            total += a;
        }

        int ones = freq[1];
        int twos = freq[2];

        int oc = ones , tc = twos * 2;

        bool ok = true;

        if(total%2!=0)  ok = false;
        else
        {
            int half = total/2;

            if(half%2==0 || (half%2==1 && ones!=0)) ok = true;
            else ok = false;
        }
        

        if(ok) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;

       



        
    }
    


    return 0;
}