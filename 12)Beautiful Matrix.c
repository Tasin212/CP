#include <stdio.h>
#include<math.h>
int main()
{
    int i,j,A[6][6],r,c;
    for(i=1;i<6;i++)
    {
        for(j=1;j<6;j++)
        {
            scanf("%d",&A[i][j]);
        }
        printf("\n");
    }
    for(i=1;i<6;i++)
    {
        for(j=1;j<6;j++)
        {
           if(A[i][j]==1)
            {
                r=abs(3-i);
                c=abs(3-j);
            }
            
        }    
    }
    printf("%d\n",r+c);

    return 0;
}
