#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    int A,H;
    scanf("%d %d",&H,&A);
    if(H<=10000 && A<=10000)
    {
        if(H%A==0)
        {
            printf("%d",H/A);
        }
        else
        {
            printf("%d",H/A+1);
        }
    }
        
      
    return 0;
}