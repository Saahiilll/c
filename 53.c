#include<stdio.h>
int factorial(int x);
int main(int argc, char const *argv[])
{
    int a=5;
    printf("the value of the factorial %d is %d",a,factorial(a));
    return 0;
}
int factorial(int x){
    if (x==1 || x==0){
        return 1;
    }
    else{
        return x * factorial (x-1);
    }
}
