#include<stdio.h>
int main(int argc, char const *argv[])
{
    int age;
    printf("enter your age\n");
    scanf("%d",&age);

    if (age>=70 && age<=18)
    {
        printf("you cannot drive in this age");
    }
    if (age<=0)
    {
        printf("you are not even born");
    }
    
    else
    {
        printf("you can drive");
    }
    
    return 0;
}
