//switch case statement//
#include<stdio.h>
int main(int argc, char const *argv[])
{
    int age;
    printf("enter your age\n");
    scanf("%d",&age);
    switch (age)
    {
    case 3:
        printf("the age is 3\n");
        break;

        case 13:
        printf("the age is 13\n");
        break;

        case 23:
        printf("the age is 23\n");
        break;
    default:
        printf("the age is not 3 , 13 and 23\n");
        break;
    }
    return 0;
}
