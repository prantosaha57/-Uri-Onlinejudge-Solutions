#include<stdio.h>
int main()
{
    int x,y,i,j=0;
    scanf("%d %d",&x,&y);

    for(i=1; i<=y; i++)
    {
        printf("%d",i);
        j++;
        if(j<x)
            printf(" ");
        else
        {
            printf("\n");
            j=0;
        }
    }
    return 0;
}
