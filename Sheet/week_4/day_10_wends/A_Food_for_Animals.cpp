#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){

    int t; cin>>t;

    while (t--)
    {
        int a,b,c,dogs,cats;
        cin>>a>>b>>c>>dogs>>cats;

        bool dg=false,ct=false;

        int x,y,bd=0,bc=0;

        if(dogs<=a) dg = true;
        if(cats<=b) ct = true;

        if(dogs>a){

            x = dogs - a;
            bd = a;

            if(c>=x){
            dg = true;
            c-=x; }
        }

        if(cats>b){

            y = cats - b;

            if(c>=y) ct = true;
        }

        if(dg && ct) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
       

    }
    


    return 0;
}