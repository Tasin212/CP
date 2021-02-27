#include<stdio.h>
int main()
{
    long long int n,m,a,res1,res2;
    scanf("%lld %lld %lld",&n,&m,&a);
    if(n%a==0)
    {
        res1=n/a;
    }
    else
    {
        res1=n/a+1;
    }


    if(m%a==0)
    {
        res2=m/a;
    }
    else
    {
        res2=m/a+1;
    }
    printf("%lld",res1*res2);


}
