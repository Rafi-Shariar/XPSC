#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){

    int t; cin>>t;

    while (t--)
    {
        int n,h;
        cin>>n>>h;
        vector<int>v(n);

        for(int i=0; i<n; i++) cin>>v[i];

        sort(v.rbegin(),v.rend());

        ll x = v[0];
        ll y = v[1];

        if (h % (x+y) == 0) {

			cout << 2*(h/(x+y));

		} else if (h%(x+y)<=x) {

			cout << 2*(h/(x+y))+1;

		} 
        else {

			cout << 2*(h/(x+y))+2;
		}
		
        cout<<endl;




       
    }
    


    return 0;
}