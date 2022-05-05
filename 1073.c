#include<stdio.h>
int main()
{
    int i=2,n;
    scanf("%d",&n);

    while(i<=n)
    {
        printf("%d^2 = %d\n",i,i*i);
        i=i+2;

    }
    return 0;
}
