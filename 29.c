//write a program to check whether a number is divisable by 97 or not
#include<stdio.h>
int main(int argc, char const *argv[])
{
    int num;
    printf("enter the number\n");
    scanf("%d",&num);
    printf("number is divisible or not %d",num%97);
    
    return 0;
}
