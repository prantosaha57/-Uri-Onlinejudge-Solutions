#include<stdio.h>
int main()
{

    int n,i,a,c=0,r=0,s=0,total=0;
    char anml;
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        scanf("%d %c",&a,&anml);
        total += a;
        if(anml=='C')
        {
            c+=a;
        }
        else if(anml=='R')
        {
            r+=a;
        }
        else if(anml=='S')
        {
            s+=a;
        }
    }
    printf("Total: %d cobaias\n", total);
    printf("Total de coelhos: %d\n", c);
    printf("Total de ratos: %d\n", r);
    printf("Total de sapos: %d\n", s);
    printf("Percentual de coelhos: %.2f %\n",(float)c * 100 / total);
    printf("Percentual de ratos: %.2f %\n",  (float)r * 100 / total);
    printf("Percentual de sapos: %.2f %\n",  (float)s * 100 / total);
    return 0;
}
