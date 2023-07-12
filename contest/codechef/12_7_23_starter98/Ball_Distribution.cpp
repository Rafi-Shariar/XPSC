#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){

    int t; cin>>t;

    while (t--)
    {
        ll boxes,colors;
        cin>>boxes>>colors;

        vector<ll>balls(colors);

        for(int i=0; i<colors; i++) cin>>balls[i];

        sort(balls.rbegin(), balls.rend());

        for (int i = 0; i < colors-1; i++)
        {
            if(balls[i]==boxes) continue;
            else
            {
                if(balls[i]<boxes){

                    int n = boxes - balls[i];

                    balls[i+1] = balls[i+1] - n;

                    if(balls[i+1]<0) balls[i+1] = 0;

                }
            }
            
        }

        if(boxes<colors) cout<<0<<endl;
        else cout<<balls[colors-1]<<endl;
        
    }
    


    return 0;
}