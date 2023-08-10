#include <iostream>
#include <vector>
#define ll long long
using namespace std;

int main() {
    ll n, time;
    cin >> n >> time;

    vector<ll> a(n), b(n), v(n);
    ll min_time = 0, max_time = 0, sum_time = 0;

    for (ll i = 0; i < n; i++) {
        cin >> a[i] >> b[i];
        min_time += a[i];
        max_time += b[i];
        v[i] = a[i];
        sum_time += a[i];
    }

    if (min_time <= time && time <= max_time) {
        cout << "YES" << endl;

        if (sum_time < time) {
            for (ll i = 0; i < n; i++) {
                ll df = b[i] - a[i];
                ll j = 1;
                while (j <= df && sum_time < time) {
                    sum_time++;
                    v[i]++;
                    j++;
                }
            }
        }

        for (ll i = 0; i < n; i++) {
            cout << v[i] << " ";
        }
        cout << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}