#include<stdio.h>
int main(int argc, char const *argv[])
{
    int i = 34;
    int *j = &i;
    printf("the value of i is %d\n",i);
    printf("the value of i is %d",*j);
    printf("the address of i is %u",&i);
    return 0;
}
