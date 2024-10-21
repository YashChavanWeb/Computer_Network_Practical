#include <stdio.h>
#include <limits.h>

#define MAX_V 100

void initialize(int dist[MAX_V][MAX_V], int V)
{
    for (int i = 0; i < V; i++)
    {
        for (int j = 0; j < V; j++)
        {
            if (i == j)
            {
                dist[i][j] = 0; // Distance to self is 0
            }
            else
            {
                dist[i][j] = INT_MAX; // Initialize other distances to infinity
            }
        }
    }
}

void updateDistances(int dist[MAX_V][MAX_V], int V)
{
    for (int k = 0; k < V; k++)
    {
        for (int i = 0; i < V; i++)
        {
            for (int j = 0; j < V; j++)
            {
                if (dist[i][k] != INT_MAX && dist[k][j] != INT_MAX &&
                    dist[i][k] + dist[k][j] < dist[i][j])
                {
                    dist[i][j] = dist[i][k] + dist[k][j]; // Update distance
                }
            }
        }
    }
}

void printDistances(int dist[MAX_V][MAX_V], int V)
{
    printf("\nDistance Vector:\n");
    for (int i = 0; i < V; i++)
    {
        printf("From Node %d:\n", i);
        for (int j = 0; j < V; j++)
        {
            if (dist[i][j] == INT_MAX)
            {
                printf("  To Node %d: INF (no path)\n", j);
            }
            else
            {
                printf("  To Node %d: %d\n", j, dist[i][j]);
            }
        }
        printf("\n");
    }
}

int main()
{
    int V;
    printf("Enter the number of vertices: ");
    scanf("%d", &V);

    int graph[MAX_V][MAX_V];
    printf("Enter the adjacency matrix (enter 0 if no edge):\n");
    for (int i = 0; i < V; i++)
    {
        for (int j = 0; j < V; j++)
        {
            scanf("%d", &graph[i][j]);
            if (graph[i][j] == 0 && i != j)
            {
                graph[i][j] = INT_MAX; // No edge case
            }
        }
    }

    int dist[MAX_V][MAX_V];
    initialize(dist, V);

    // Copy initial graph weights to distance matrix
    for (int i = 0; i < V; i++)
    {
        for (int j = 0; j < V; j++)
        {
            dist[i][j] = graph[i][j];
        }
    }

    updateDistances(dist, V);
    printDistances(dist, V);

    return 0;
}

/*
Sample Output:

Enter the number of vertices: 4
Enter the adjacency matrix (enter 0 if no edge):
0 5 0 10
5 0 3 0
0 3 0 1
10 0 1 0

Distance Vector:
From Node 0:
  To Node 0: 0
  To Node 1: 5
  To Node 2: 8
  To Node 3: 9

From Node 1:
  To Node 0: 5
  To Node 1: 0
  To Node 2: 3
  To Node 3: 4

From Node 2:
  To Node 0: 8
  To Node 1: 3
  To Node 2: 0
  To Node 3: 1

From Node 3:
  To Node 0: 9
  To Node 1: 4
  To Node 2: 1
  To Node 3: 0

*/