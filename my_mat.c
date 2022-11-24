#include <stdio.h>
#include <stdlib.h>
#include "my_mat.h"

int funcB(int originalGraph[][10], int a, int b)
{
    floydWarshall(originalGraph);

    if (originalGraph[a][b] != 0 && originalGraph[a][b] != 99999999)
    {
        printf("True");
    }
    else
        printf("False");
}

int funcC(int originalGraph[][10], int a, int b)
{
    floydWarshall(originalGraph);

    return originalGraph[a][b];
}

void funcD()
{
    exit(0);
}

void floydWarshall(int originalGraph[][10])
{
   
    int a, b, c;
    int shortestPath[10][10];
    
    for (a = 0; a < 10; a++)
    {
        for (b = 0; b < 10; b++)
        {
            shortestPath[a][b] = originalGraph[a][b];
        }
    }
   
    for (c = 0; c < 10; c++) 
    {
       for (a = 0; a < 10; a++) 
        {
            for (b = 0; b < 10; b++) 
            {
                if (shortestPath[a][c] + shortestPath[c][b] < shortestPath[a][b])
                {
                    shortestPath[a][b] = shortestPath[a][c] + shortestPath[c][b];
                }   
            }
        }
    } 
     int k, l;

     for ( k = 0; k < 10; k++)
     {
        for ( l = 0; l < 10; l++)
        {
            originalGraph[k][l] = shortestPath[k][l];
        }
        
     }
}
