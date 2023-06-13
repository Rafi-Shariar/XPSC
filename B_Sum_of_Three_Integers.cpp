#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){

    int k,s,c=0;
    cin>>k>>s;


    for (int i = 0; i <= k; i++)
    {
        for (int j = 0; j <=k; j++)
        {
            // for (int l = 0; l <= k; l++)
            // {
            //     if(i+j+l==s)c++;
            // }

            int l = s - (i+j);
            // cout<<l<<" ";
            if(l>=0 && l<=k){
            if(i+j+l==s)c++; }
            
            
        }
        
    }

    cout<<c<<endl;
    


    return 0;
}