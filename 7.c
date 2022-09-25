//if else statements//
#include<stdio.h>
int main(int argc, char const *argv[])
{
    int age;
    printf("Enter your age\n");
    scanf("%d",&age);
    printf("You have entered %d as your age!\n",age);
    if ((age>=18)&&(age>1))        
    {
        printf("You can vote!");
    }
    else if (age>=10)
    {
        printf("You are teeneager and you can vote for teenager!");
    }
    else if (age>=3)
    {
         printf("You are baby and you can vote for only babies!");
    }
    
    
    else{
        printf("You cannot vote!");
    }
    
    return 0;
}
