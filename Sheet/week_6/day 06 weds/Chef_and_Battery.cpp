#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main(){

    int t; cin>>t;

    while (t--)
    {
        int n; cin>>n;

        int c=0;

        while (n!=50)
        {
            if(n<50){
                c++;
                n+=2;
            }
            else
            {
                c++;
                n-=3;
            }
            
        }

        cout<<c<<endl;
        
        

        
    }
    


    return 0;
}