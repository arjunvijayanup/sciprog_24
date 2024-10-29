#include<stdio.h>
#include<stdlib.h>

void fib(int* a,int* b);
int main (void){
    int n;
    int f0=0;
    int f1=1;
    printf("Please input a positive integer n:\n");
    scanf("%d",&n);
    if(n<1){
        printf("n must be greater than 1\n");
        exit(1);
    }
    printf("The fibonacci series is: \n");
    printf("%d %d",f0,f1);

    for (int i = 2; i <= n ; i++){
        fib(&f1,&f0);
        printf(" %d", f1);
        if((i + 1) % 10 == 0){                //Printing line break for each 10 integers
            printf("\n");
        }
    }
    return 0;
}

void fib(int *a, int *b)
{
    int next;
    next= *a + *b;
    *b = *a;
    *a = next;

}