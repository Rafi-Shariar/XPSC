#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main() 
{
	ll t,n,i,j,k;
	cin >> t;
	while(t--)
	{
	    cin >> n;
	    for(i=1;i<n;i+=2)
	    {
	        cout<<i<<" ";
	    }
	    for(i=n;i>=2;i-=2)
	    {
	        cout<<i<<" ";
	    }
	    cout<<endl;
	}
	return 0;
}
