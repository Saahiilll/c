#include<stdio.h>
int main(int argc, char const *argv[])
{
    int principal;
    int rate;
    int years; 
    
    printf("enter the principal amount\n");
    scanf("%d",&principal);

    printf("enter the rate\n");
    scanf("%d",&rate);

    printf("enter the period\n");
    scanf("%d",&years);

    printf("the simple interest is %d",(principal*rate*years)/100);

    return 0;
}