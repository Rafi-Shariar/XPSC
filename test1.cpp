#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int,int> pii;
#ifdef LOKAL
#include "DEBUG_TEMPLATE.h"
#else
#define HERE
#define debug(args...)
#endif


void fast(){
   ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
}

void factors(vector<int>&v, int n){

    for (int i = 2; i*i <= n; i++)
    {
        if( n%i==0){

            while (n%i==0)
            {
                n/=i;
                v.push_back(i);
            }
            
        }
    }

    if(n>1) v.push_back(n);
    
}


int main()
{
    fast();

    int n; 
    while (cin>>n && n!=0)
    {
        int tmp = n;

        if(tmp<0) tmp*=-1;

        vector<int>v;
        factors(v,tmp);

        printf("%d = ",n);

        if(n<0)
        printf("-1 x ");


        for (int i = 0; i < v.size()-1; i++)
        {
             printf("%d x ",v[i]);
        }

        printf("%d\n",v[v.size()-1]);
        
    }
    

    return 0;
}