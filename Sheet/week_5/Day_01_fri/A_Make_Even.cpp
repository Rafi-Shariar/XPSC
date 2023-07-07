#include<bits/stdc++.h>
using namespace std;
#define ll long long int
//https://codeforces.com/contest/1611/problem/A
bool find_even(int n){

    while (n!=0)
    {
        int tmp = n%10;

        if(tmp%2==0) return true;

        n/=10;
    }

    return false;
    
}
int main(){

    int t; cin>>t;

    while (t--)
    {
        int n; cin>>n;

        if(n%2==0) cout<<0<<endl;
        else
        {
            bool even_exits = find_even(n);

            if(!even_exits) cout<<-1<<endl;
            else
            {
                string s;
                while (n!=0)
                {
                    char tmp = n%10 + '0';
                    s.push_back(tmp);
                    n/=10;
                }

                int f = s.size()-1;

                int val = s[f] - '0';

                if(val %2==0) cout<<1<<endl;
                else cout<<2<<endl;

                
            }
            
        }
        
    }
    


    return 0;
}