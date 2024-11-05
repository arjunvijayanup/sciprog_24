#include <stdio.h>
#include <stdlib.h>

int *allocatearray(int n);
void fillwithones(int *p, int n);
void printarray(int *p, int n);
void freepointer(int *p);

int main(){

    int size;
    int *array;

    printf("Enter the size of the array required:");

    if(scanf("%d",&size) != 1)
    {
        printf("\nDid not enter a number!\n");
        return 1;

    }

    array = allocatearray(size);
    fillwithones(array, size);
    printarray(array, size);
    freepointer(array);

    return 0;

}

int *allocatearray(int n){

    return ((int *)malloc(n * sizeof(int)));

}

void fillwithones(int *p, int n){

    for (int i=0 ; i<n ; i++){
        p[i]=1;
    }

}

void printarray(int *p, int n){

    for (int i=0 ; i<n ; i++){
        printf("%d  ", p[i]);
    }

     printf("\n");

}

void freepointer(int *p)
{
    free(p);
}