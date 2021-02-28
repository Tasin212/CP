#include<stdio.h>
int main()
{
    int N,M;
    scanf("%d %d",&N,&M);
    if(N<=100 && M<=N)
    {
        if(N==M)
            printf("Yes");
        else
            printf("No");
    }

    return 0;
}
