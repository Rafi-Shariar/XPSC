#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){

    int t; cin>>t;

    while (t--)
    {
        int n; cin>>n;
        bool freq[10]={false};

        vector<int>d;

        if( n <10) cout<<n<<endl;
        else
        {
           int x = 9;

           while (n!=0)
           {
             n -= x;
             d.push_back(x);
             x--;

             if(n>x){
                continue;
             }else
             {
                d.push_back(n);
                break;
             }
            

           }

          sort(d.begin(),d.end());
          for(auto i : d) cout<<i;
          cout<<endl;
           
            
        }
        
        

    }
    


    return 0;
}