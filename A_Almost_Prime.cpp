#include<bits/stdc++.h>
using namespace std;
#define ll long long int

bool primeCheck(int n) {
    if (n <= 1)
        return false;

    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0)
            return false;
    }

    return true;
}

int countDistinctPrimeDivisors(int n) {
    set<int> divisors;

    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            if (primeCheck(i)) {
                divisors.insert(i);
            }

            if (primeCheck(n / i)) {
                divisors.insert(n / i);
            }
        }
    }

    return divisors.size();
}

int main() {
    int n;
    cin >> n;
    int count = 0;

    for (int i = 1; i <= n; i++) {
        if (countDistinctPrimeDivisors(i) == 2) {
            count++;
        }
    }

    cout << count << endl;

    return 0;
}
