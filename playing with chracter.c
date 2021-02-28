#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    char ch,s[50],sen[100];
    
    scanf("%c",&ch);
    printf("%c\n",ch);
    
    scanf("%s",&s);
    printf("%s\n",s);

    scanf("\n%[^\n]%*c", sen);
    printf("%s\n",sen);
      
    return 0;
}