#include<stdio.h>
int main()
{
    float A[100],x;
    int i;
    for(i=0;i<100;i++)
    {
        scanf("%f",&A[i]);
    }
    for(i=0;i<100;i++)
    {

        if(A[i]<=10.0)

        {
            printf("A[%d] = %.1f\n",i,A[i]);
        }
    }


    return 0;
}
