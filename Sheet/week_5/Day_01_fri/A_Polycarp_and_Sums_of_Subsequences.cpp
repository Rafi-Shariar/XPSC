#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){

    int t; cin>>t;

    while (t--)
    {
        vector<int>v(7);

        for (int i = 0; i < 7; i++)
        {
            cin>>v[i];
        }

        vector<int>ans;

        for (int i = 0; i < 4; i++)
        {
            for (int j = i+1; j < 5; j++)
            {
                for (int k = j+1; k < 6; k++)
                {
                    if(v[i]+v[j]+v[k]== v[6]){

                        cout<<v[i]<<" "<<v[j]<<" "<<v[k]<<endl;
                        break;
                    }
                }
                
            }
            
        }
        
        
    }
    


    return 0;
}