#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){

 int n; cin>>n;

 
 int sum=0, osum=0,esum=0 , c=0;
 vector<int>v(n);

 for(int i=0; i<n; i++){
    cin>>v[i];
    sum += v[i];

    if(i & 1) osum += v[i];

 }

 for (int i = 0; i < n; i++)
 {
    if(i & 1) osum = sum - esum - v[i];
    else esum = sum - osum - v[i];

    if(osum==esum) c++;

 }

 cout<<c<<endl;
 










    return 0;
}