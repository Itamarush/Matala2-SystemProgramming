#include <stdlib.h>
#include <stdio.h>
#include "my_mat.h"
// #include "my_mat.c"
// #define INF  99999999

int main()
{
    int arr [10][10];
    char ch;
    int a, b, num, xy, yz;
    int paa;

    FILE* txt;
    txt = fopen("txt.txt", "r");
    while (1)
    {  
        printf("Enter a/b/c/d");
        scanf("%c", &ch);
        
        if (ch == 65)
        {
            int i, j, num;
            for ( i = 0; i < 10; i++)
            {
                for ( j = 0; j < 10; j++)
                {
                    
                    num = fgetc(txt) - '0';

                    if (num == -38)
                        {
                        num =fgetc(txt) - '0';   
                        }

                     if (i == j)
                    {
                        arr[i][j] = 0;
                        continue;
                    }

                    if (num == 0)
                        {
                            arr[i][j] = 99999999;
                            continue;
                        }
                    
                    arr[i][j] = num;
                }  
            }
        }

        // for (size_t i = 0; i < 10; i++)
        // {
        //     for (size_t j = 0; j < 10; j++)
        //     {
        //         int x = arr[i][j];
        //         printf(" %d", x);
        //     }
        //     printf("\n");
        // }
        // printf("\n");printf("\n");
        floydWarshall(arr);

        // for (size_t i = 0; i < 10; i++)
        // {
        //     for (size_t j = 0; j < 10; j++)
        //     {
        //         int x = arr[i][j];
        //         printf(" %d", x);
        //     }
        //     printf("\n");
        // }
        
        

        if (ch == 66)
        {
            scanf("%d", &a);
            scanf("%d", &b);
            funcB(arr, a, b);
        }
        
        else if (ch == 67)
        {
            scanf("%d", &a);
            scanf("%d", &b);
            printf("%d", funcC(arr, a, b));
        }
        
        else if (ch == 68)
        {
            funcD();
        }
        printf("\n");

    } 
    
    return 0;
}



    //     int arr [10][10];
    // char ch;
    // int a, b;

    // while (1)
    // {  
    //     scanf("%c", &ch);

    //     if (ch == 65)
    //     {
    //         funcA(arr);       
    //     }  
        
    //     if (ch == 66)








