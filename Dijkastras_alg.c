#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

#define MAX_V 100

int minDistance(int dist[], int sptSet[], int V)
{
    int min = INT_MAX, min_index;

    for (int v = 0; v < V; v++)
    {
        if (sptSet[v] == 0 && dist[v] <= min)
        {
            min = dist[v];
            min_index = v;
        }
    }

    return min_index;
}

void dijkstra(int graph[MAX_V][MAX_V], int src, int V)
{
    int dist[MAX_V];
    int sptSet[MAX_V];

    for (int i = 0; i < V; i++)
    {
        dist[i] = INT_MAX;
        sptSet[i] = 0;
    }

    dist[src] = 0;

    for (int count = 0; count < V - 1; count++)
    {
        int u = minDistance(dist, sptSet, V);
        sptSet[u] = 1;

        for (int v = 0; v < V; v++)
        {
            if (!sptSet[v] && graph[u][v] && dist[u] != INT_MAX && dist[u] + graph[u][v] < dist[v])
            {
                dist[v] = dist[u] + graph[u][v];
            }
        }
    }

    printf("Vertex \t Distance from Source\n");
    for (int i = 0; i < V; i++)
    {
        printf("%d \t\t %d\n", i, dist[i]);
    }
}

int main()
{
    int V;
    printf("Enter the number of vertices: ");
    scanf("%d", &V);

    int graph[MAX_V][MAX_V];
    for (int i = 0; i < V; i++)
    {
        for (int j = 0; j < V; j++)
        {
            graph[i][j] = 0;
        }
    }

    printf("Enter the adjacency matrix (enter 0 if no edge):\n");
    for (int i = 0; i < V; i++)
    {
        for (int j = 0; j < V; j++)
        {
            scanf("%d", &graph[i][j]);
        }
    }

    int src;
    printf("Enter the source vertex (0 to %d): ", V - 1);
    scanf("%d", &src);

    dijkstra(graph, src, V);

    return 0;
}

/*
Sample Output:

Enter the number of vertices: 5
Enter the adjacency matrix (enter 0 if no edge):
0 10 0 30 100
10 0 50 0 0
0 50 0 20 10
30 0 20 0 60
100 0 10 60 0
Enter the source vertex (0 to 4): 0
Vertex 	 Distance from Source
0 		 0
1 		 10
2 		 60
3 		 30
4 		 70

*/