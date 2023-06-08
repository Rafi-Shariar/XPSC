#include<bits/stdc++.h>
using namespace std;
int digit_count(int total){
    int c=0;
    while (total!=0)
    {
        t/=10;
        c++;
    }

    return c;
    
}
int main(){

    int t; cin>>t;

    while (t--)
    {
        int n,x;
        cin>>n>>x;

        int total = n*x;

        if(digit_count(total)==5){

            int first = total/10000
        }
    }
    
   
    return 0;
}