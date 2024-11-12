/*
Iterative and recursive versions of the Euclid's Algorithm
to Calculate the GCD of two positive integers
*/
#include<stdio.h>

// Iterative Euclid Method
int it_gcd(int a, int b){

    int temp;

    while(b!=0){

        temp=b;
        b=a%b;
        a=temp;

    }

    return a;

}

// Recursive Euclid Method
int re_gcd(int a, int b){

    if(b == 0){

        return a;

    }

    else{

        return re_gcd(b, a%b);

    }

}

// Main function
int main(){

    int a, b, e;

    printf("Enter two positive integers:\n");

    if(scanf("%d %d", &a, &b)!=2){

        printf("Please enter two integers!\n");
        return 1;
    }

    if(a<=0 || b<=0){

        printf("Please enter positive integers!\n");
        return 1;

    }

    printf("Iterative GCD(%d, %d): %d\n", a, b, it_gcd(a, b));
    printf("Recursive GCD(%d, %d): %d\n", a, b, re_gcd(a, b));

    return 0;
}

