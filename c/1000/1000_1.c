#include <stdio.h>

int add(int a, int b) {
    return a+b;
}

int main() {
    int a,b,c;

    printf("the first number is ");
    scanf("\n%d", &a);
    printf("the second number is");
    scanf("\n%d", %b);

    c = add(a,b);

    printf("the result is %d\n", c);

    return 0;
}