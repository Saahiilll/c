//write a program to calculate simple interest for a set of values representing principle,number of years and rate of interest
#include<stdio.h>
int main(int argc, char const *argv[])
{
    int principal=100000,rate=5,years=1;
    int simpleinterest=(principal*rate*years)/100;
    printf("the simple interest is %d",simpleinterest);
    return 0;
}


