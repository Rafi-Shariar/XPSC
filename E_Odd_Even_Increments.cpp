#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){

    int n=10;

    int sum=1;

    for (int i = 1; i <= n; i++)
    {
        sum = sum*i;
    }

    cout<<sum<<endl;
    

    


    return 0;
}