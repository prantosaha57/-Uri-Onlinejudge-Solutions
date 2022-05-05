#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    int arr[a];
    int i,in=0,out=0;
    for(i=0; i<a; i++)
    {
        scanf("%d",&arr[i]);

        if(arr[i]>=10 && arr[i]<=20 )
        {
            in++;
        }
        else
        {
            out++;
        }
    }
    printf("%d in\n",in);
    printf("%d out\n",out);
    return 0;
}
