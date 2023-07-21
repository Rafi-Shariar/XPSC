#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){

    int t; cin>>t;

    while (t--)
    {
        char arr[8][8];
        vector<char>v;

        for (int i = 0; i < 8; i++)
        {
            for (int j = 0; j < 8; j++)
            {
                cin>>arr[i][j];

                if(arr[i][j]>='a' && arr[i][j]<='z') v.push_back(arr[i][j]);
            }
            
        }

        for(auto i : v) cout<<i;
        cout<<endl;
        

        
        
    }
    


    return 0;
}