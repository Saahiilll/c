//if else if//
#include<stdio.h>
int main(int argc, char const *argv[])
{
    int age;
    printf("Enter your age\n");
    scanf("%d", &age);
    printf("You have entered %d as your age\n",age);

    if (age>=18)
    {
        printf("you can vote");

    }
    else if(age>=10){
        printf("your age is between 10 to 18,you can vote for kids");

    }
    else if (age>=4)
    {
        printf("your age is between 4 to 10,you can vote for babies");
    }
    else if (age<=0)
    {
        printf("you are not born yet");
    }

    else
    {
        printf("you cannot vote!");
    }
    
    
    
    return 0;
}
