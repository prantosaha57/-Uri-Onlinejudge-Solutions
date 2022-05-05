#include<stdio.h>
int main()
{
    int sum,i,n;
    scanf("%d",&n);

    for(i=0;;i++)
    {
        sum = (n*i)+2;
        if(sum > 10000)
        {
            break;
        }
        printf("%d\n",sum);
    }
    return 0;
}
