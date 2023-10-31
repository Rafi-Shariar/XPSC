#include<bits/stdc++.h>

using namespace std;

const int N = 1e5;
const int infinity = 1e9;

vector< pair<int,int> >adj_list[N];
int d[N], visited[N], parent[N];
int node, edges;
map<int,string>mp;

void map_assign(){
    mp[1] = "A";
    mp[2] = "B";
    mp[3] = "C";
    mp[4] = "D";
    mp[5] = "E";
}

void dijkstra(int src){
    for (int i = 1; i <= node; i++) {
        d[i] = infinity;
        parent[i] = -1;
    }

    d[src] = 0;

    for (int i = 0; i < node; i++) {
        int selected_node = -1;

        for (int j = 1; j <= node; j++) {
            if (visited[j] == 1) continue;

            if (selected_node == -1 || d[selected_node] > d[j]) {
                selected_node = j;
            }
        }

        visited[selected_node] = 1;

        for (auto i : adj_list[selected_node]) {
            int adj_node = i.first;
            int edge_cost = i.second;

            if (d[selected_node] + edge_cost < d[adj_node]) {
                d[adj_node] = d[selected_node] + edge_cost;
                parent[adj_node] = selected_node;
            }
        }
    }
}

void print_shortest_path(int destination) {
    if (parent[destination] == -1) {
        cout << mp[destination];
        return;
    }
    print_shortest_path(parent[destination]);
    cout << " -> " << mp[destination];
}

int main(){

    map_assign();

    cin >> node >> edges;
      
    cout<<node<<edges;

    for (int i = 0; i < edges; i++) {
        int u, v, w;
        cin >> u >> v >> w;

        adj_list[u].push_back({v, w});
        adj_list[v].push_back({u, w});
    }

    int src = 1;
    dijkstra(src);

    for (int i = 1; i <= node; i++) {
        cout << "Shortest distance from " << mp[src] << " to " << mp[i] << ": " << d[i] << endl;
        cout << "Shortest path: ";
        print_shortest_path(i);
        cout << endl;
    }

    return 0;
}
