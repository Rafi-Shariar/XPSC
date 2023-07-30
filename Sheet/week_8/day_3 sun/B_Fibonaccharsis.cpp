#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){

    int t; cin>>t;

    while (t--)
    {
        int n,k; cin>>n>>k;

        if(k>30){ cout<<0<<endl; continue;};

        int c=0;

       for (int i = 0; i <=n; i++)
       {
         int second = n;
         int first = i;
         bool pos = true;

         for (int j = 1; j <= k-2; j++)
         {
            int tmp = second - first;
            second = first;
            first = tmp;

            if(first<=second && first>-1) continue;
            else pos = false;
         }

         if(pos) c++;

       }

       cout<<c<<endl;
       

    }
    


    return 0;
}