#include<stdio.h>
int sum(int a, int b);
int main(int argc, char const *argv[])
{
    int c;
    c=sum(1,2);
    printf("the value of c is %d",c);
    return 0;
}
int sum(int a,int b){
    int result;
    result= a + b;
    return result;
}