#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){

    int t; cin>>t;

    while (t--)
    {
        int n; cin>>n;
        vector<int>v(n);

        ll sum = 0;

        int x=0;

        for (int i = 0; i < n; i++)
        {
            cin>>v[i];

            if(v[i]<0){
                x++;
                v[i] = -v[i];
            }

            sum += v[i];
        }

        sort(v.begin(),v.end());

        if(x %2 != 0) sum -= 2*v[0];

        cout<<sum<<endl;
        
    }
    


    return 0;
}