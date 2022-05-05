#include<stdio.h>
int main()
{
    int i,j,n=7;

    for(i=1;i<10;i=i+2)
    {
        for(j=n;j>=(n-2);j--)
        {
           printf("I=%d J=%d\n",i,j);
        }
        n=j+5;
    }

    return 0;
}
