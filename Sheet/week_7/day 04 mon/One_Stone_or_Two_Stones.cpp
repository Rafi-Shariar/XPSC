#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){

    int t; cin>>t;

    while (t--)
    {
        ll x,y;
        cin>>x>>y;

        if(x==y){

            if(x&1)cout<<"CHEF"<<endl;
            else cout<<"CHEFINA"<<endl;
            continue;
        }

        ll dif = abs(x-y);

        if(dif>=2){

            if(x>y) cout<<"CHEF"<<endl;
            else cout<<"CHEFINA"<<endl;

            continue;
        }

        if((x&1)==1 && x>y) cout<<"CHEFINA"<<endl;
        else if( (x&1)==0 && x>y) cout<<"CHEF"<<endl;
        else if( (y&1)==0 && x<y) cout<<"CHEF"<<endl;
        else if ( (y&1)==1 && x<y) cout<<"CHEFINA"<<endl;
    }
    


    return 0;
}