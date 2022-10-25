// write a program to find whether a year entered by user is a leap year or not.take year as an input from the user

#include<stdio.h>
int main(int argc, char const *argv[])
{
    int year;
    printf("enter an year\n");
    scanf("%d",&year);

    if (year % 400 == 0)
    {
        printf(" %d is the leap year\n",year);
    }
    if (year % 100 == 0)
    {
        printf(" %d is not a leap year\n",year);
    }
    if (year % 4 == 0)
    { 
        printf("%d is a leap year\n",year);
    }
    
    else
    {
        ("the  %d is not a leap year\n",year);
    }
    
    
    return 0;
}
