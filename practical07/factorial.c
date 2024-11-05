#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int factorial(int x);

int main(void){

    int order;
    double *elem,fx;

    printf("Please enter the order of polynomial you wish to use:");

    if(scanf("%d", &order) != 1){

        printf("\nDid not enter a number\n");
        return 1;

    }

    elem = (double *)malloc(order * sizeof(double));

    for (int i=0 ; i<order ; i++){

        elem[i]= 1.0/ (double)factorial(i+1);
        printf("\nelem[i] = %.14lf",elem[i]);

    }

    fx=1;

    for(int i=0 ; i<order ; i++){

        fx+=elem[i];

    }

    printf("\nfx is estimated as %.6lf, with a difference if %e\n", fx, fx-exp(1.0));

    free(elem);//after malloc, free the variable used to store the allocation

    return 0;
}

int factorial(int x){

    if(x<0){

        printf("Must enter a positive number\n");
        return(-1);

    }
    else if(x == 0){

        return 1;

    }
    else{
        return (x * factorial(x-1));
    }
}