#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){

    int t; cin>>t;

    while (t--)
    {
        vector<int>a(3),b(3);

        for (int i = 0; i < 3; i++)
        {
            cin>>a[i];
        }

        for (int i = 0; i < 3; i++)
        {
            cin>>b[i];
        }

        sort(a.begin(),a.end());
        sort(b.begin(),b.end());

        int sum_a = a[1] + a[2];
        int sum_b = b[1] + b[2];

        if(sum_a==sum_b) cout<<"Tie"<<endl;
        else if( sum_a>sum_b) cout<<"Alice"<<endl;
        else cout<<"Bob"<<endl;
        

    }
    


    return 0;
}