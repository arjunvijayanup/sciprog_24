#include<stdio.h>
#include<math.h>
#include<stdlib.h>
float *tan_array = NULL;

float degtorad(float degree){		// Function for converting degree to radian
	float pi=3.14159265;
	return ((pi * degree)/180);
}

float traprule(int N){				// Function for calculation of Trapezoidal Area (excluding b-a/2n term)
	float area;
	
	area=tan_array[0]+tan_array[N];
	printf("\nInital Area (sum at x(0) and x(12)) = %f\n", area);

	for(int i=1;i<N;i++){
		area+=2*tan_array[i];

	}

	return area;
}

int main(){
	int N=12;
	tan_array = (float *)malloc(N * sizeof(int)); 	// Allocate memmery in array for N integers

	// Initialize variables
	float adeg,bdeg,H,degree;

	// Setting the integration limits in degrees
	adeg=0;
	bdeg=60;

	H=((degtorad(bdeg)-degtorad(adeg))/(2*N));		// Calculation of b-a/2n in radian values

	for(int i=0; i<=N; i++){						// Loop which prints each tan array value
		degree=i*5;
		tan_array[i]=tan(degtorad(degree));
		printf("\ntan_array[%d] = %f\n",i,tan_array[i]);
	}

	float traparea = H * traprule(N);				// Trapezoidal Area calulcation

	// Approx Result
	printf("\nArea (Using Trapezoidal Rule): %f\n", traparea);
	
	// Actual Result
	printf("\nArea (Using log of 2): %f\n\n", logf(2));

	return 0;
}
