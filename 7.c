//exercise//
#include<stdio.h>
int main(int argc, char const *argv[])
{
    int marks;
    printf("enter your marks in math\n");
    scanf("%d",&marks);
    
    
    if (marks>=35)
    {
        printf("you have entered %d as your marks in math, you are pass\n",marks);
    }
    else
    {
       printf("you are failed,you cannot get any rewards\n");
    }


    printf("enter your marks in science\n");
    scanf("%d",&marks);
    
    
    if (marks>=35)
    {
        printf("you have entered %d as your marks in science, you are pass",marks);
    }
    else
    {
       printf("you are failed,you cannot get any rewards");
    }
    
    
    return 0;
}
