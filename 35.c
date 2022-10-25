// write a program to find out whether a student is pass or fail if it require total 40% and at least require 33% in each subject to pass assume 3 subjects and take marks as an input from the user

#include<stdio.h>
int main(int argc, char const *argv[])
{
    int physics, chemistry, math;
    float total;
    printf("enter your physics marks\n");
    scanf("%d",&physics);

    printf("enter your chemistry marks\n");
    scanf("%d",&chemistry);

    printf("enter your math marks\n");
    scanf("%d",&math);

    total=(physics+chemistry+math)/3;

    if ((total<40) || physics<33 || chemistry<33 || math<33)
    {
        printf("your marks is %f and you are fail\n",total);
    }
    else
    {
        printf("your mark is %f and you are pass\n",total);
    }
    
    return 0;
}
