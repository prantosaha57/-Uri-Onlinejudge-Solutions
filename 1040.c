#include<stdio.h>
int main()
{
    double a,b,c,d,e,total;
    scanf("%lf %lf %lf %lf", &a, &b, &c, &d);
    total = ((a*2)+(b*3)+(c*4)+d)/10;
    printf("Media: %.1f\n",total);
    if(total>7.0)
    {
        printf("Aluno aprovado.\n");
    }

    else if(total>=5.0 && total<=6.9 )
    {
        printf("Aluno em exame.\n");
        scanf("%lf",&e);
        printf("Nota do exame: %.1f\n",e);
        total = (total+e)/2;
        if(total>=5.0)
        {
            printf("Aluno aprovado.\n");
            printf("Media final: %.1f\n",total);
        }
        else
        {
            printf("Aluno reprovado.\n");
        }
    }
    else
    {
        printf("Aluno reprovado.\n");
    }
 return 0;

}
