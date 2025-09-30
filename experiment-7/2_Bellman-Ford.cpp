#include <iostream>
#include <limits.h>
using namespace std;

struct Edge {
    int src, dest, weight;
};

void bellmanFord(Edge edges[], int V, int E, int src) {
    int dist[V];

    for (int i = 0; i < V; i++) dist[i] = INT_MAX;
    dist[src] = 0;

    // Relax all edges V-1 times
    for (int i = 1; i <= V - 1; i++) {
        for (int j = 0; j < E; j++) {
            int u = edges[j].src;
            int v = edges[j].dest;
            int w = edges[j].weight;
            if (dist[u] != INT_MAX && dist[u] + w < dist[v]) {
                dist[v] = dist[u] + w;
            }
        }
    }

    // Check for negative cycles
    for (int j = 0; j < E; j++) {
        int u = edges[j].src;
        int v = edges[j].dest;
        int w = edges[j].weight;
        if (dist[u] != INT_MAX && dist[u] + w < dist[v]) {
            cout << "Graph contains negative weight cycle!" << endl;
            return;
        }
    }

    cout << "Bellman-Ford: Shortest distances from source " << src << endl;
    for (int i = 0; i < V; i++) {
        cout << "Vertex " << i << " -> " << dist[i] << endl;
    }
}

int main() {
    int V = 5; // number of vertices
    int E = 8; // number of edges
    Edge edges[] = {
        {0, 1, -1}, {0, 2, 4},
        {1, 2, 3}, {1, 3, 2}, {1, 4, 2},
        {3, 2, 5}, {3, 1, 1}, {4, 3, -3}
    };

    bellmanFord(edges, V, E, 0);
    return 0;
}
