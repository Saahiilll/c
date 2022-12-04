#include<stdio.h>
int main(int argc, char const *argv[])
{
    int marks[4];
    printf("enter the marks of no 1 ");
    scanf("%d",&marks[0]);
    printf("enter the marks of no 2 ");
    scanf("%d",&marks[1]);
    printf("enter the marks of no 3 ");
    scanf("%d",&marks[2]);
    printf("enter the marks of no 4 ");
    scanf("%d",&marks[3]);

    printf("you have entered the mark as %d %d %d and %d",marks[0],marks[1],marks[2],marks[3]);
    return 0;
}
