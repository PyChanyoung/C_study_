#include <stdio.h>

void say_hello(void); //prototyping, function declaration

int main()
{
    int x,y,z;

    x = 1;
    y = 2;
    z = 3;

    z = x + y;

    say_hello();
    return 0;
}

void say_hello(void)
{
    int x = 1;
    x = 10;
    printf("Say, Ho!");
    return;
}