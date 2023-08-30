#include<bits/stdc++.h>
using namespace std;
const int N = 1e5;
const int infinity = 1e9;
vector< pair<int,int> >adj_list[N];
int d[N], visited[N], parent[N];
int node, edges;
map<int,string>mp;

void map_assign(){

    ifstream inputFile("F:/phitron/XPSC/project/map_set.txt");
    
    int number_of_cities; inputFile >> number_of_cities;

    for (int i = 0; i < number_of_cities; i++)
    {
        int number_city;
        string name; 
        inputFile >> number_city >> name;
        mp[number_city] = name;
    }

}

void data_collection(){

    ifstream inputFile("F:/phitron/XPSC/project/data.txt");

     inputFile >> node >> edges;

    for (int i = 0; i < edges; i++) {
        int u, v, w;
        inputFile >> u >> v >> w;

        adj_list[u].push_back({v, w});
        adj_list[v].push_back({u, w});
    }

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

void print_path(int des) {

    if (parent[des] == -1) {
        cout << mp[des];
        return;
    }
    print_path(parent[des]);
    cout << " --> " << mp[des];
}

void sigle_destination(){

   string from,to;  
   printf("From : "); cin>>from;
   printf("To : "); cin>>to;
   int f,t;

   for(auto i : mp){
    if(i.second == from) f = i.first;
    if(i.second == to) t = i.first;
   }

    int src = f;
    dijkstra(src);

    cout<<"Shortest distance from "<<mp[f]<<" to "<<mp[t]<<": "<<d[t]<<" km"<<endl;
    print_path(t);

}

void multiple_destinations(){

}

int main(){

    map_assign();
    data_collection();

    printf("List of Locations : ");
    for(auto i : mp ) cout<<i.second<<" ";
    cout<<endl<<endl;


    printf("Number of destination : ");
    int n_of_des; cin>>n_of_des;

    if(n_of_des==1) sigle_destination();
    else multiple_destinations();

  

    return 0;
}
