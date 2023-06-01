#include<bits/stdc++.h>
using namespace std;
/*
6
1 2 5 3 4 2
3
output : 12

1 2 5
  2 5 3
    5 3 4
      3 4 2

*/
int main(){

    int n; cin>>n;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    int k; cin>>k;

    int i=0, j=0,mx=INT_MIN , sum =0;

    while (j<n)
    {
        sum+=arr[j];
        if( j< k-1){
            
            j++;
        }
        else
        {
            mx = max(mx,sum);
            sum-=arr[i];
            i++;
            j++;
        }
        
    }

    cout<<mx;
    

    


    return 0;
}