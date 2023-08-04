#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){

    int t; cin>>t;
    string s = "BAN";

    while (t--)
    {
        int n; cin>>n;
        string tmp ;

        int l ,c;
        vector<pair<int,int>>v;

    /*    if(n==1){
            cout<<1<<endl<<"1 2"<<endl;
        }
        if(n==2){
            cout<<1<<endl<<"2 6"<<endl;
        }
        else
        {
            */
            if(n%2==1){
                c=1;
                l=4;
                v.push_back({1,2});

                while (l< 3*n)
                {
                    int x = l+4;
                    v.push_back({l,x});
                    c++;
                    l+=6;
                }   

            }
            else
            {
                l=1;
                c=0;

                  while (l< 3*n)
                {
                    int x = l+4;
                    v.push_back({l,x});
                    c++;
                    l+=6;
                }   


            }

            cout<<c<<endl;
            for(auto i : v){
                cout<<i.first<<" "<<i.second<<endl;
            }
            
      //  }
        


    }
    


    return 0;
}