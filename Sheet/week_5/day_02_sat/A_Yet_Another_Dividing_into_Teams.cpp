#include<bits/stdc++.h>
using namespace std;
#define ll long long int
//https://codeforces.com/contest/1249/problem/A
int main(){

    int t; cin>>t;

    while (t--)
    {
        int n;
		cin >> n;
		vector<int> a(n);
		for (int i = 0; i < n; i++) {
			cin >> a[i];
		}
		bool ok = true;

		for (int i = 0; i < n; i++) {

			for (int j = 0; j < i; j++) {

				ok &= abs(a[i] - a[j]) != 1;
			}
		}
		cout << 2 - ok << endl;
    }
    


    return 0;
}