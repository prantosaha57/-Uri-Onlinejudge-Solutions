#include<stdio.h>
int main()
{
    int arr[5];
    int count=0,i;

    for(i=0;i<5;i++)
    {
        scanf("%d",&arr[i]);
        if(arr[i]%2==0)
        {
            count++;
        }
    }
    printf("%d valores pares\n",count);
    return 0;
}
