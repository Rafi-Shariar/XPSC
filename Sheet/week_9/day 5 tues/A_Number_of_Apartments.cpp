#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){

    int t; cin>>t;

   
    int a=0,b=0,c=0;

    while (t--)
    {
        int n; cin>>n;

        if(n<=4 && n!=3){
           
           cout<<-1<<endl;
        }
        else
        {
            if(n % 3 ==0 ) cout<<n/3<<" "<<0<<" "<<0<<endl;
            else if( n%3==1) cout<< (n-7)/3<<" "<<0<<" "<<1<<endl;
            else cout<< (n-5)/3 <<" "<<1<<" "<<0<<endl;
        }
        
        
    }
    


    return 0;
}