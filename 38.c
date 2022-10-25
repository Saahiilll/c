//write a program to determine whether a character entered by user is lowercase or not

#include<stdio.h>
int main(int argc, char const *argv[])
{
    char ch;
    printf("enter any name");
    scanf("%c",&ch);

    if (ch<=122 && ch>=97)
    {
        printf("the name is in the lowercase\n",ch);
    }
    else
    {
        printf("the name is not in the lowercase\n",ch);
    }
    
    
    return 0;
}
