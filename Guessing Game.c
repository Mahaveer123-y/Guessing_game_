/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
    int number, Guess, nguesses =1 ;
    srand(time(0));
    number = rand()%100+1;//Generate number between 1 to 100
    printf("The number  is %d\n", number);
    //keep running the loop untill the number is gussed
    do{
        printf("Guess the number between 1 to 100\n");
        scanf("%d", &Guess);
        if (Guess> number)
        {
            printf("lower number plaease\n");
        }
        else if(Guess<number)
        {
            printf("higher number plaese\n");
        }
        else{
            printf("You guessed it in %d attempts",nguesses);
        }
        nguesses++;
    }
    while(Guess != number);
    return 0;
}
