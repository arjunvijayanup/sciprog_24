#include<stdlib.h>
#include<stdio.h>
#include<math.h>

double arctanh1(double x, double delta);
double arctanh2(double x);

int main(){

    double delta;
    printf("Please enter a real positive number delta: \n");
    scanf("%lf", &delta);
    if(delta<0){
        printf("Delta was negative\n");
        exit(1);
    }
    double x= -0.9;
    int length = 1000;
    double tanh1[length];
    double tanh2[length];
    int i=0;
    while(x <= 0.9 && i < length){                                   // i<length put in so that the array doesnt go past the allocated memory  
        tanh1[i] = arctanh1(x, delta);
        tanh2[i] = arctanh2(x);
        printf("The dif. at x=%lf is %.10lf \n", x, fabs((tanh1[i] - tanh2[i]) / tanh2[i]));
        i++;
        x += 0.01;

    }
    return 0;
}

double arctanh1(double x, double delta){

    double sum = 0;
    double elem, val;
    int n = 0;
    do{
        val = 2 * n + 1;
        elem = pow(x, val) / val;
        sum += elem;
        n++;
    } while (fabs(elem) >= delta);

    return sum;

}

double arctanh2(double x){

    return (log(1 + x) - log(1 - x)) / 2;
}