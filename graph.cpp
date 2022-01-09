#include <bits/stdc++.h>
#include <list>
using namespace std;
class Graph {
 public:
 Graph(int n) : V(n), adj(new list<int>[V]) {}
 ~Graph() { delete[] adj; }
 void addEdge(int v, int w) { adj[v].push_back(w); }
 void DFS(int v);
 void DFS();
private:
 int V;
 list<int> *adj;
 void DFSUtil(int v, bool visited[]);
};
void Graph::DFSUtil(int v, bool visited[])
{
 visited[v] = true;
 cout << v << " ";
 for (auto it = adj[v].begin(); it != adj[v].end(); ++it) {
   if (!visited[*it])
     DFSUtil(*it, visited);
} }
void Graph::DFS(int v)
{
 bool *visited = new bool[V];
 for (int i = 0; i != V; ++i)
   visited[i] = false;
 DFSUtil(v, visited);
}
void Graph::DFS()
{
 bool *visited = new bool[V];
 for (int i = 0; i != V; ++i)
   visited[i] = false;
 for (int i = 0; i != V; ++i) {
   if (!visited[i])
     DFSUtil(i, visited);
}
 
}
int main() {
 Graph g(5);
 g.addEdge(0, 4);
 g.addEdge(1, 2); g.addEdge(1, 0);
 g.addEdge(2, 4);
 g.addEdge(3, 2); g.addEdge(3, 1);
 g.addEdge(4, 3);
 cout<<endl;
 cout << "........ DFS from vertex 0  ...... :" << endl;
 g.DFS(0);
 cout << endl<<endl;
return 0; }
// #include <iostream>
// #include <vector>
// using namespace std;

// int main()
// {
    

//     // variable declaration
//     int cost[10][10], i, j, k, n, e, top, v, stk[10], visit[10], visited[10];

//     cout << "Enter the number of vertices in the Graph: ";
//     cin >> n;
//     cout << "\nEnter the number of edges in the Graph : ";
//     cin >> e;
//     cout << "\nEnter the start and end vertex of the edges: \n";

//     for (k = 1; k <= e; k++)
//     {
//         cin >> i >> j;
//         cost[i][j] = 1;
//     }

//     cout << "\nEnter the initial vertex to start the DFS traversal with: ";
//     cin >> v;
//     cout << "\nThe DFS traversal on the given graph is : \n";
//     cout << v << " ";

//     // As we start with the vertex v, marking it visited to avoid visiting again
//     visited[v] = 1;

//     k = 1;

//     // The DFS Traversal Logic
//     while (k < n)
//     {
//         for (j = n; j >= 1; j--)
//         {
//             if (cost[v][j] != 0 && visited[j] != 1 && visit[j] != 1)
//             {
//                 visit[j] = 1;

//                 // put all the vertices that are connected to the visited vertex into a stack
//                 stk[top] = j;
//                 top++;
//             }
//         }

//         // output all the connected vertices one at a time
//         v = stk[--top];
//         cout << v << " ";
//         k++;

//         // as v is visited so it is not a valid candidate to visit in future so visit[v]=0 and visited[v]=1
//         visit[v] = 0;

//         // to mark it visited
//         visited[v] = 1;
//     }

//     cout << "\n\n\n";

//     return 0;
// }
