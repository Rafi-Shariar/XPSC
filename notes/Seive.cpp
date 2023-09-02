
//regular
#include<bits/stdc++.h>
using namespace std;

const int N=1e6;
bool marked[N];

void sieve(int n) {
    marked[0] = marked[1] = true;
    for( int i = 4; i<N; i+=2) marked[i] = true;

    for (int i = 3; i * i <= n; i+=2) {
        if (!marked[i]) { 
            for (int j = i * 2; j < n; j += i) {
                marked[j] = true; 
            }
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

