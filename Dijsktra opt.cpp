
    #include<bits/stdc++.h>
    using namespace std;

    const int N = 1e5;
    const int infinity = 1e9;

    vector< pair<int,int> >adj_list[N];
    int d[N], visited[N];
    int parent[N];
    int node,egdes;
    map<int,string>mp;

    void map_assing(){

        mp[1] = "A";
        mp[2] = "B";
        mp[3] = "C";
        mp[4] = "D";
        mp[5] = "E";
    }

    
void print_shortest_path(int destination) {
    if (parent[destination] == -1) {
        cout << mp[destination];
        return;
    }
    print_shortest_path(parent[destination]);
    cout << " -> " << mp[destination];
}

    void dijkstra(int src){

      for (int i = 1; i <= node+1; i++)
      {
            d[i] = infinity;
      }

      d[src] = 0;

      for (int i = 0; i < node; i++)
      {
            int selected_node = -1;

            for (int j = 1; j <= node; j++)
            {
                  if(visited[j] == 1) continue;

                  if(selected_node == -1 || d[selected_node] > d[j]){

                        selected_node = j;
                  }
            }

            visited[selected_node] = 1;

            for( auto  i : adj_list[selected_node] ){

                  int adj_node = i.first;
                  int edge_cost = i.second;

                  if( d[selected_node] + edge_cost < d[adj_node]){

                        d[adj_node] = d[selected_node] + edge_cost;
                  }
            }
            
      }
      

    }

    int main(){

        map_assing();

      cin>>node>>egdes;

      for (int i = 0; i < egdes; i++)
      {
            int u,v,w;
            cin>>u>>v>>w;

            adj_list[u].push_back({v,w});
            adj_list[v].push_back({u,w});

      }

      int src = 1;

      dijkstra(src);

      for (int i = 1; i <=node; i++)
      {
            cout<<mp[i]<<"-->"<<d[i]<<endl;
            print_shortest_path(i);
            cout<<endl;
      }

      cout<<endl;
      
      



      return 0;
    }