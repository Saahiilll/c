//write a program using function to find the average of three numbers
#include<stdio.h>
float average(int a, int b, int c);
int main(int argc, char const *argv[])
{
    int a,b,c;
    printf("enter the value of a");
    scanf("%d",&a);
    printf("enter the value of b");
    scanf("%d",&b);
    printf("enter the value of c");
    scanf("%d",&c);
    printf("the average of this number is %f",average(a,b,c));
    return 0;
}

float average(int a, int b, int c){
    float result;
    result = (a + b + c)/3;
    return result;
}

