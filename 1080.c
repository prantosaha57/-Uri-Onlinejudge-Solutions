#include<stdio.h>
int main()
{
    int arr[100],i,max=0,p;

    for(i=0;i<100;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<100;i++)
    {
        if(max<arr[i])
        {
            max = arr[i];
            p=i+1;
        }
    }
    printf("%d\n",max);
    printf("%d\n",p);
    return 0;
}
