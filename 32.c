//conditional one line statement

#include<stdio.h>
int main(int argc, char const *argv[])
{
    int num;
    printf("enter the number");
    scanf("%d",&num);

    (num<5)? printf("the number is less than 5"):printf("the number is bigger than 5");
    return 0;
}
