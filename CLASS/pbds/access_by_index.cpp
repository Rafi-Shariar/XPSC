#include <bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;;
template <typename T> using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
 
    pbds<int>s;
    s.insert(2);
    s.insert(4);
    s.insert(9);
    s.insert(2);
    s.insert(5);
    s.insert(1);
    s.insert(5);

    // elements stored : 1 2 4 5 9

    cout<<*s.find_by_order(3)<<endl;


    return 0;
}