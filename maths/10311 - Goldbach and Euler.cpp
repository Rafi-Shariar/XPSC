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
const int M = 100000001; 
bool marked[M+1] = {false};

void sieve(int n) {
    marked[0] = marked[1] = true;

    for (int i = 2; i * i <= n; ++i) {
        if (!marked[i]) { 
            for (int j = i * i; j <= n; j += i) {
                marked[j] = true; 
            }
        }
    }
}
void fast(){
   ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
}
int main()
{
    fast();
    sieve(100000001);

    int n; 
    while (cin>>n)
    {
        if(!marked[n]) printf("%d is not the sum of two primes!\n",n);
        else
        {
            int l=2 , r=n-1;
            int dif = INT_MAX;
            int x=-1,y=-1;

            while (l<r)
            {
                int sum = l + r;
                if(!marked[l] && !marked[r] && sum==n){

                    int cur_dif = r - l;

                    if(cur_dif < dif){
                        dif = cur_dif;
                        x=l;
                        y=r;
                    }

                    l++;
                    r--;
                    continue;
                }

                if(sum < n) l++;
                else if(sum==n){
                    l++;
                    r--;
                }
                else r--;
            }

            if(x==-1 || y==-1) printf("%d is not the sum of two primes!\n",n);
            else
            {
                printf("%d is the sum of %d and %d.\n",n,x,y);
            }
            


            
            

        }
        
    }
    

  
    
    

    return 0;
}