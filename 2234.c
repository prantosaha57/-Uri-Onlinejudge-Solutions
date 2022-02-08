#include<stdio.h>
int main()
{
    int a,b;
    float total;
    scanf("%d%d",&a,&b);

    total = (float) a/b;

    printf("%.2f\n",total);

    return 0;
}
