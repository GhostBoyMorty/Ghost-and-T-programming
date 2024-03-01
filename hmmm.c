#include <stdio.h>
#include <stdlib.h>

int main()
{
    char name[50];

    printf("what is your name: \n");
    scanf("%s", name);
    enter_your_values(name);
    /*void("%s", name);*/
}

void enter_your_values(char name[50])
{   
    printf("hello %s please enter your values");
    sleep(2);

    double num1;
    double num2;
    printf("enter first number: \n");
    scanf("%lf", &num1);
    printf("enter second number: \n");
    scanf("%lf", &num2);

    printf("answer: %f", num1 * num2);

    return 0;
}