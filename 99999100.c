/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int A,B;
    scanf("%d %d",&A,&B);
    if(A<10001 && B<10001)
        printf("%d",A+B);

    return 0;
}
