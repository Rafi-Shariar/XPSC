#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int dis(int ax,int ay,int bx, int by){

    return abs(ax-bx) + abs(ay-by);
}
int main(){

    int t; cin>>t;

    while (t--)
    {
        int ax,ay,bx,by,cx,cy;
        cin>>ax>>ay>>bx>>by>>cx>>cy;

        int X = dis(ax,ay,bx,by);
        int Y = dis(ax,ay,cx,cy);
        int Z = dis(bx,by,cx,cy);

        cout<<(X+Y-Z)/2 +1<<endl;

    }
    


    return 0;
}