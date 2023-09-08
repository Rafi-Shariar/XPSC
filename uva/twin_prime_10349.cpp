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

const int N=20000000;
bool marked[N];

void sieve(int n) {
    marked[0] = marked[1] = true;
    for( int i = 4; i<N; i+=2) marked[i] = true;

    for (int i = 3; i * i <= N; i+=2) {
        if (!marked[i]) { 
            for (int j = i * 2; j < N; j += i) {
                marked[j] = true; 
            }
        }
    }
}

vector<pair<ll,ll>>twins;

void twin_gen(){

    for (ll i = 0; i <N-2; i++)
    {
        if(!marked[i] && !marked[i+2]) twins.push_back({i,i+2});
    }
    
}

int main()
{
    fast();
    sieve(N);
    twin_gen();

    //debug(twins);

    int n;
    while (cin>>n)
    {
        ll i = twins[n-1].first;
        ll j = twins[n-1].second;

        printf("(%lld, %lld)\n",i,j);
    }
    


    return 0;
}