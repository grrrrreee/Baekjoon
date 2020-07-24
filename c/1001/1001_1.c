#include<stdio.h>

int sub(int a, int b) {
    return a-b;
}

int main() {
    int a,b,c;

    printf("the first number is ");
    scanf("\n %d", &a);

    printf("the second number is ");
    scanf("\n %d", &b);

    c = sub(a,b);

    printf("the result is %d\n", c);

    return 0;
}