#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){

    int t; cin>>t;

    while (t--)
    {
        int n,k,x;
        cin>>n>>k>>x;

        if(k<=1 && x==1) cout<<"NO"<<endl;
        else if(x!=1){
            cout<<"YES"<<endl;
            cout<<n<<endl;
            for(int i=1; i<=n; i++) cout<<1<<" ";
            cout<<endl;
        }
        else
        {
            if(k==2 && x==1){

                if(n & 1) cout<<"NO"<<endl;
                else
                {
                    cout<<"YES"<<endl;
                    cout<<n/2<<endl;
                    for(int i=1; i<=n/2; i++) cout<<2<<" ";
                    cout<<endl;
                }
                
            }
            else
            {
                cout<<"YES"<<endl;
                cout<<n/2<<endl;
                if(n%2==1){

                    cout<<3<<" ";
                    for(int i=1; i<n/2; i++) cout<<2<<" ";
                    cout<<endl;
                }
                else
                {
                    for(int i=0; i< n/2; i++) cout<<2<<" ";
                    cout<<endl;
                }
                
            }
            
        }
        
        
    }
    


    return 0;
}