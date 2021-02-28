
#include <stdio.h>

int main()
{
    float A,B,C,SUM;
    float MEDIA;
    scanf("%f %f %f",&A,&B,&C);
    if(A<=10.0 && B<=10.0 && C<=10.0)
    {
        MEDIA=(((2*A)/10)+((3*B)/10)+((5*C)/10));
    }
    printf("MEDIA = %.1f\n",MEDIA);

    return 0;
}
