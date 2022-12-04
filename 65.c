// print the five marks entered by user using for loop//
#include<stdio.h>
int main(int argc, char const *argv[])
{
    int marks[5];
    for (int i=0; i<5; i++)
    {
        printf("enter the marks of student %d : ",i+1);
        scanf("%d", &marks[i]);
    }
    for (int i=0; i<5; i++)
    {
        printf("the marks of the student is %d is :%d\n",marks[i]);
    }
    
    return 0;
}
