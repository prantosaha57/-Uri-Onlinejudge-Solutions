#include<stdio.h>
int main()
{
    float arr[6],sum=0;
    int i,count=0;

    for(i=0;i<6;i++)
    {
        scanf("%f",&arr[i]);
        if(arr[i]>0)
        {
            count++;
        }
        if(arr[i]>0)
        {
            sum = sum + arr[i];
        }

    }
    sum = sum/count;
    printf("%d valores positivos\n",count);
    printf("%0.1f\n",sum);
    return 0;
}
