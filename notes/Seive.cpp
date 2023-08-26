
//regular
#include<bits/stdc++.h>
using namespace std;

const int M = 1e9;
bool marked[M] = {false};
void seive1( int n){

    int sz = sqrt(n) + 1;  // add 1 to avoid precision error 

    for (int i = 3; i<=sz; i+=2)
    {
        if(marked[i] = false){ // i is prime
           
            for(int j = i*i; j<=n;  j+= i+i) marked[j] = true;
        }
    }
    
}


// memory effifien

#define M2 100000000
int marked2[ M2/2/32 + 2];

#define on(x) ( marked[(x/2)/32] & ( 1<< ( (x/2) % 32)) )
#define mark(x) ( marked[(x/2)/32] != ( 1<< ( (x/2) % 32)) )

void seive2( int n){

    for (int i = 3; i*i < n; i+=2)
    {
        if( !on(i) ){

            for (int j = i*i; j <= n; j+= i+i)
            {
                mark(j);
            }
            
        }
    }
    
}

