#include<stdio.h>
int main()
{
    int a,b,i;
    scanf("%d",&a);
    if(a%2==0)
    {
        a=a+1;
    }
    b = a+10;
    for(i=a; i<=b; i=i+2)
    {
        printf("%d\n",i);
    }
    return 0;
}
