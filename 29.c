// write a program to check whether the given number is even or not

#include<stdio.h>
int main(int argc, char const *argv[])
{
    int num;
    printf("enter the number\n");
    scanf("%d", &num);
    if (num%2==0)
    {
        printf("the number is even");
    }

    else
    {
        printf("the number is not even");
    }
    
    
    return 0;
}
