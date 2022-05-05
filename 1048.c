#include<stdio.h>
int main()
{
    float salary,salary_inc;
    scanf("%f",&salary);
    if(salary>0 && salary<=400.0)
    {
        salary_inc = (salary+(salary*.15));
        printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 15 %%\n",salary_inc,salary*.15);
    }
    else if(salary>400 && salary<=800.00)
    {
        salary_inc = (salary+(salary*.12));
        printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 12 %%\n",salary_inc,salary*.12);
    }
    else if(salary>800.00 && salary<=1200.00)
    {
        salary_inc = (salary+(salary*.10));
       printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 10 %%\n",salary_inc,salary*.10);
    }
    else if(salary>1200 && salary<=2000.00)
    {
        salary_inc = (salary+(salary*.07));
       printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 7 %%\n",salary_inc,salary*.07);
    }
    else if(salary>2000.00)
    {
        salary_inc = (salary+(salary*.04));
       printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 4 %%\n",salary_inc,salary*.04);
    }
    return 0;
}
