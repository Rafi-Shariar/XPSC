#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){

    int t; cin>>t;

    while (t--)
    {
        int h,x,y;
        cin>>h>>x>>y;

        if(x==h || y==h){
            cout<<1<<endl;
            continue;
        }

        int c=0;

        for (int i = 1; i <= 200; i++)
        {c++;
            if( (x*i)+y >= h) break;

        }

        cout<<c+1<<endl;
        

    }
    


    return 0;
}