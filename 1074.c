#include<stdio.h>
int main()
{
    int a,i;
    scanf("%d",&a);
    int arr[a];

    for(i=0; i<a; i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0; i<a; i++)
    {
        if(arr[i]%2==0 && arr[i]<0)
        {
            printf("EVEN NEGATIVE\n");
        }
        else if(arr[i]%2==0 && arr[i]>0)
        {
            printf("EVEN POSITIVE\n");
        }
        else if(arr[i]%2!=0 && arr[i]>0)
        {
            printf("ODD POSITIVE\n");
        }
        else if(arr[i]%2!=0 && arr[i]<0)
        {
            printf("ODD NEGATIVE\n");
        }
        else
        {
            printf("NULL\n");
        }
    }


    return 0;
}
