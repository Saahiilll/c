// write a program to calculate a area of rectangle
//using inputs supplied by the user
#include<stdio.h>
int main(int argc, char const *argv[])
{
    int length,breadth;
    printf("the length of the rectangle is \n");
    scanf("%d",&length);
    printf("the breadth of the rectangle is \n");
    scanf("%d",&breadth);

    printf("the area of the rectangle is %d",length*breadth);
    return 0;
}
