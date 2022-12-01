// write a program having a variable i, print the address of i, pass this variable to a function and print its address//

#include<stdio.h>
void printadd(int a);

int main(int argc, char const *argv[])
{
    int i=4;
    printf("the value of i is %d\n",i);
    printadd(i);
    printf("the address of i is %u\n",&i);
    return 0;
}
void printadd(int a){
    printf("the address of variable a is %u\n",&a);
}