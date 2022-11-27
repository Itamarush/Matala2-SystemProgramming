#include <stdio.h>
#include <stdlib.h>
#include "my_mat.h"
#define INF 99999999

int funcA(int originalGraph[][10])
{
    int i, j, num;
    for ( i = 0; i < 10; i++)
    {
        for ( j = 0; j < 10; j++)
        {
            scanf("%d", &num);
            if (i == j)
            {
                originalGraph[i][j] = 0;
                continue;
            }

            else if (num == 0)
                {
                    originalGraph[i][j] = INF;
                    continue;
                }

            originalGraph[i][j] = num;
        }
    }
    floydWarshall(originalGraph);
    return 1;
}

int funcB(int originalGraph[][10], int a, int b)
{
    
    if ((originalGraph[a][b] != 0 && originalGraph[a][b] != INF) && (a != b))
    {
        printf("True");
    }
    else
        printf("False");

    return 1;
}

int funcC(int originalGraph[][10], int a, int b)
{

    if (originalGraph[a][b] == 0 || originalGraph[a][b] ==  INF )
    {
        return -1;
    }

    else if (a == b)
    {
        return -1;
    }

    return originalGraph[a][b];
}

void funcD()
{
    exit(0);
}

void floydWarshall(int graph[][10]) 
{
  int shortestPath[10][10];
  int i, j, l;

  for (i = 0; i < 10; i++)
    for (j = 0; j < 10; j++)
      shortestPath[i][j] = graph[i][j];

 
  for (l = 0; l < 10; l++) 
  {
    for (i = 0; i < 10; i++) 
    {
      for (j = 0; j < 10; j++) 
      {
        if (shortestPath[i][l] + shortestPath[l][j] < shortestPath[i][j])
          shortestPath[i][j] = shortestPath[i][l] + shortestPath[l][j];
      }
    }
  }

   for (size_t i = 0; i < 10; i++)
        {
            for (size_t j = 0; j < 10; j++)
            {
                graph[i][j] = shortestPath[i][j];
            }
            printf("\n");
        }
}