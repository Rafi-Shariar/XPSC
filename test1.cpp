#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {
    int n; cin >> n;
    
    queue<ll> q;
    bool freq[200022] = {false};
    map<ll, int> positions;  // Store positions of elements
    
    for (int i = 0; i < n; i++) {
        ll a; cin >> a;
        q.push(a);
        positions[a] = i;  // Store the position of element 'a'
    }

    for (int i = 0; i < n; i++) {
        ll m; cin >> m;
        
        if (freq[m]) {
            cout << positions[m] + 1 << " ";  // Adding 1 because positions are 0-indexed
        } else {
            ll val;
            while (!q.empty()) {
                val = q.front();
                freq[val] = true;
                q.pop();
                if (val == m) break;
            }

            cout << positions[m] - positions[val] + 1 << " ";  // Adding 1 for the position adjustment
        }
    }

    return 0;
}
