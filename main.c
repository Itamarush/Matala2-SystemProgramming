#include <stdlib.h>
#include <stdio.h>
#include "my_mat.h"
#define MatSize 10
#define Achar 65
#define Bchar 66
#define Cchar 67
#define Dchar 68

int main()
{
    int arr [MatSize][MatSize];
    char ch;
    int a, b;
    
    while (1)
    {  
        scanf("%c", &ch);

        if (ch == Achar)
        {
            funcA(arr);       
        }  

        if (ch == Bchar)
        {
            scanf("%d", &a);
            scanf("%d", &b);
            funcB(arr, a, b);
        }
        
        else if (ch == Cchar)
        {
            scanf("%d", &a);
            scanf("%d", &b);
            printf("%d\n", funcC(arr, a, b));
        }
        
        else if (ch == Dchar)
        {
            funcD();
        }
        

    } 
    
    return 0;
}



  








