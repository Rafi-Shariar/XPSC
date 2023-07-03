#include<bits/stdc++.h>
using namespace std;
#define ll long long int
//https://codeforces.com/contest/1690/problem/A
int main(){

    int t; cin>>t;

    while (t--)
    {
        int n; cin>>n;

        for (int a = 3; a <=n; a++)
        {
            int c = (n - a)/2;
            int b = n - a - c;

            if(c>1 && c==b){
                c--;
                b++;
            }

            if(a>b && b>c){
                cout<<b<<" "<<a<<" "<<c<<endl;
                break;
            }
        }
        
    }
    


    return 0;
}