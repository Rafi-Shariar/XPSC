#include <bits/stdc++.h>
using namespace std;

int main() {
    priority_queue<int, vector<int>, greater<int>> st;

    st.push(10);
    st.push(5);
    st.push(20);
    st.push(30);

    while (!st.empty()) {
        cout << st.top() << " ";
        st.pop();
    }

    return 0;
}