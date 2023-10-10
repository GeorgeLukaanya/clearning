#include<stdio.h>
// whenever you intend to return a value put it above the function that calls it

double cube(double num)
{
    double result=num*num*num;
    printf("\nThere is a place where mercy reigns\n");
    return result;
}

int main()
{
    printf("Answer: %0.1f", cube(7.0));
    return 0;
}
