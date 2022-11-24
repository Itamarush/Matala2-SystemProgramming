#include <stdlib.h>
#include <stdio.h>
#include "my_mat.h"

int main()
{
    int arr [10][10];
    char ch;
    int a, b, i, j, num;
    
    while (1)
    {  
        printf("Enter a/b/c/d");

        if (ch == 65)
        {
            for ( i = 0; i < 10; i++)
            {
                for (j = 0; j < 10; j++)
                {
                    scanf("$d", num);
                    arr[i][j] = num;

                    if (num == 0)
                    {
                        arr[i][j] = 99999999;
                    }
                }
                
            }
        }

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
    }        
    return 0;
}
