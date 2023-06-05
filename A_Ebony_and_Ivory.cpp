#include<bits/stdc++.h>
using namespace std;
int main(){

    int a,b,c;
    cin>>a>>b>>c;

    if( a==c || b==c) cout<<"Yes"<<endl;
    else
    {
        bool pos = false;
        for (int i = 0; i <= c; i++)
        {
            for (int j = 0; j <=c; j++)
            {
                int sum = (a*i + b*j);
                if(sum==c){
                    pos = true;
                    break;
                }
            }
            
        }

        if(pos) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
        
    }
    


    return 0;
}