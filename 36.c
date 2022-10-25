// calculate the tax paid by an employee to the government as per the stats mentioned below
// income slab    tax
// 2.5l to 5l     5%
// 5l to 10l      20%
// above 10l      30%

#include<stdio.h>
int main(int argc, char const *argv[])
{
    float tax=0,income;
    printf("enter your income\n");
    scanf("%f",&income);

    if (income>=250000 && income<=500000)
    {
        tax = tax + 0.05 * (income-250000);
    }

    if (income>=500000 && income<=1000000)
    {
        tax = tax + 0.2 * (income-500000);
    }

    if (income>=1000000)
    {
        tax = tax + 0.3 * (income-1000000);
    }
    
    
    printf("your tax on the income is %f\n",tax);
    

    return 0;
}
