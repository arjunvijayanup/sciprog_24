#include<stdio.h>
int main(void) {
    int i;
    double a; // Enter information from user
    printf("Enter an int and double\n");
    scanf("%d %lf",&i,&a);
    printf("The entered values are %d and %lf\n", i, a);
    }