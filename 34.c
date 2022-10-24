//write a program to find grade of a student given his numbers based on below
// 100-90=A
// 90-80=B
// 80-70=C
// 70-60=D
// <60=E

#include<stdio.h>
int main(int argc, char const *argv[])
{
    int marks;
    printf("enter your marks\n");
    scanf("%d",&marks);

    switch (marks>=90)
    {
    case 1:
        printf("you have got A grade");
        break;
    
    default:
        break;
    }
    switch (marks>=80 &&)
    {
    case 1:
        printf("you have got B grade");
        break;
    
    default:
        break;
    }

    switch (marks>=70)
    {
    case 1:
        printf("you have got C grade");
        break;
    
    default:
        break;
    }

    switch (marks>=60)
    {
    case 1:
        printf("you have got D grade");
        break;
    
    default:
        break;
    }

    switch (marks<60)
    {
    case 1:
        printf("you have got E grade");
        break;
    
    default:
        break;
    }
    return 0;
}
