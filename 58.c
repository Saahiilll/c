#include<stdio.h>
void wrong_swap(int a, int b);
void swap( int *a ,int *b);
int main(int argc, char const *argv[])
{
    int a=4, b=7;
    printf("the value of a and b before swap is %d and %d\n",a,b);
    swap(&a,&b);
     printf("the value of a and b after swap is %d and %d\n",a,b);
    return 0;
}
void wrong_swap(int a, int b){
    int temp;
    temp = a;
    a = b;
    b = temp;



}
void swap(int *a , int *b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
