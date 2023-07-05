#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){

    int t; cin>>t;

    while (t--)
    {
        int n; cin>>n;
        int arr[n]; 

        for(int i=0; i<n; i++) cin>>arr[i];

        int c=0;
        bool pos = true;

        for (int i = n-2; i >= 0; i--)
        {

             if(arr[i+1]==0){
                pos = false;
                break;
            }

           
            if(arr[i]>= arr[i+1]){

                while (arr[i]>=arr[i+1])
                {
                    arr[i]/=2;
                    c++;
                }
            }

            

            
        }

        if(pos) cout<<c<<endl;
        else cout<<-1<<endl;
        
    }
    


    return 0;
}