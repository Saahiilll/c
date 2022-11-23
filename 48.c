#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(int argc, char const *argv[])
{
    int number,guess,nguesses;
    srand(time(0));
    number = rand()%100 +1;
    // printf("the number is %d",number);
    //keep running the loop untill the number is guess
    do
    {
        printf("guess the number between 1 to 100\n");
        scanf("%d",&guess);
        if (guess>number)
        {
            printf("lower number please\n");
        }
        else if(guess<number)
        {
            printf("higher number please\n");
        }
        else
        {printf("you guessed in %d attempts",nguesses);
        }
        nguesses++;
        
    } while (guess!=number);
    
    return 0;
}
