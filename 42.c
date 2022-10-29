//write a program to print number from 1 to 4//
#include<stdio.h>
int main(int argc, char const *argv[])
{
    int i=0;
    int n;

    printf("enter the value\n");
    scanf("%d",&n);
    do
    {
        printf("the value of n is %d\n",i+1);
        i++;
    } while (i<n);
    
    return 0;
}
