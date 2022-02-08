#include<stdio.h>
int main()
{
    int n,i,j,flag=0;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
       scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
       for(j=2;j<arr[i];j++)
       {
           if(arr[i]%j==0)
           {
               flag=1;
               break;
           }
           else
           {
               flag=0;
           }
       }
           if(flag==1)
           {
               printf("%d nao eh primo\n",arr[i]);
           }
           else
           {
               printf("%d eh primo\n",arr[i]);
           }

    }
    return 0;
}
