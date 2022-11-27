#include <stdio.h>
#include <stdlib.h>
#include "my_mat.h"

int num, i, j;

int funcA(int originalGraph[][10], int a)
{
    
    for ( i = 0; i < 10; i++)
    {
        for ( j = 0; j < 10; j++)
        {
            if (i == j)
            {
                originalGraph[i][j] = 0;
                continue;
            }

            else if (a == 0)
                {
                    originalGraph[i][j] = 99999999;
                    continue;
                }

            originalGraph[i][j] = a;
        }
    }
    floydWarshall(originalGraph);
    return 1;
}

int funcB(int originalGraph[][10], int a, int b)
{
    
    if ((originalGraph[a][b] != 0 && originalGraph[a][b] != 99999999) && (a != b))
    {
        printf("True");
    }
    else
        printf("False");

    return 1;
}

int funcC(int originalGraph[][10], int a, int b)
{

    if (originalGraph[a][b] == 0 || originalGraph[a][b] == 99999999 )
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
}
