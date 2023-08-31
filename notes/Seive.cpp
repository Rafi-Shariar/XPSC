
//regular
#include<bits/stdc++.h>
using namespace std;

const int M = 1000000; 
bool marked[M+1] = {false};

void sieve(int n) {
    marked[0] = marked[1] = true;

    for (int i = 2; i * i <= n; ++i) {
        if (!marked[i]) { // i is prime
            for (int j = i * i; j <= n; j += i) {
                marked[j] = true; // Mark multiples of i as composite
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

