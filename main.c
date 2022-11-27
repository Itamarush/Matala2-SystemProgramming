#include <stdlib.h>
#include <stdio.h>
#include "my_mat.h"


int main()
{
    int arr [10][10];
    char ch;
    int a, b;

    while (1)
    {  
        scanf("%c", &ch);

        if (ch == 65)
        {
            funcA(arr);       
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
        printf("\n");

    } 
    
    return 0;
}



  








