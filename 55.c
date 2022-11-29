//write a function to convert celsius into farhanheight//
#include<stdio.h>
float force(float mass);
int main(int argc, char const *argv[])
{
    float m;
    printf("enter the value of m");
    scanf("%f",&m);
    printf("the value of mass is %f",force(m));
    return 0;
}
float force(float mass){
   float result = mass * 9.8;
   return result;

}
