#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){

    int t; cin>>t;

    while (t--)
    {
        int c=0;

        for (int i = 0; i < 3; i++)
        {
            int a; cin>>a;

            if(a==0) c++;
        }

        if(c>=2) cout<<"Water filling time"<<endl;
        else cout<<"Not now"<<endl;
        
    }
    


    return 0;
}