// 1. Two numbers are input through keyboard. Write a program to find out the maximum and minimum of these 2 numbers

#include <stdio.h>

int maxmin(int x, int y);

int main() {
    int a, b, c;

    printf("Enter any two numbers: ");
    scanf("%d%d" , &a, &b);

    c = maxmin(a, b);

    if (c == 1) {
        printf("%d is maximum,%d is minimum", a, b);
    }
    else
        printf("%d is maximum,%d is minimum", b, a);

    return 0;
}

int maxmin(int x, int y)
{
    if (x > y)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}


