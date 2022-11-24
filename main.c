#include <stdlib.h>
#include <stdio.h>
#include "my_mat.h"
// #include "my_mat.c"

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
                    // if (i == j)
                    // {
                    //     arr[i][j] = 0;
                    //     continue;
                    // }
                    
                    num = fgetc(txt) - '0';

                    if (num == -38)
                        {
                        num =fgetc(txt) - '0';   
                        }

                    if (num == 0)
                        {
                            arr[i][j] = 99999999;
                            continue;
                        }
                    
                    arr[i][j] =(int) num;
                }  
            }
        }
        floydWarshall(arr);

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
