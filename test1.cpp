#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> v;
        for (int i = 0; i < n; i++) {
            int a;
            cin >> a;
            v.push_back(a);
        }

        int mx = n;
        int i = n - 1;
        int j = n - 1;
        int c=0;

        while (c<=n) {

            cout<<i<<" ---> "<<j<<endl;

            while (i >= 0 && v[i] != mx)
                i--;

            for (int x = i; x <= j; x++){
                cout << v[x] << " ";
                c++;

            }

            j = i - 1;
            mx--;

        
        }
    }

    return 0;
}
