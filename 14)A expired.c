#include <stdio.h>
#include<math.h>
int main()
{
    double X,A,B;
    scanf("%lf %lf %lf",&X,&A,&B);
    if(1<=X || X<pow(10,9) || 1<=A || A<pow(10,9) || 1<=B || B<pow(10,9) )
    {
        if(A>=B)
        {
            printf("delicious\n");
        }
        else if(X+A>=B)
        {
            printf("safe\n");
        }
        else if(X+A<B)
        {
            printf("dangerous\n");
        }

    }

    return 0;
}
