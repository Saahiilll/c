//conditionals statements
//write a program to find whether the number is even or not using if else statement
#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a ;
    printf("enter the number\n");
    scanf("%d",&a);
    if (a%2==0)
    {
        printf("the value %d is even\n",a);
    }
    else
    {
            printf("the value is not even");
    }
    
    return 0;
}
