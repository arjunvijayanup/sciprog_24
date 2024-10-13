#include<stdio.h>
#include<math.h>

int main(){

	// Initialize variables
	float a,b,fx,sum,n,h,x;
	int i;

	// Setting the integration limits and no. of divisions
	a=0;
	b=M_PI/3;
	n=12;
	h=(b-a)/n;

	// Sum of first part tan(0) and tan (pi/3)
	sum=tan(a)+tan(b);

	// Trapezoidal Rule: For-loop for calculating the sum of all other tan values
	for(i=1;i<n;i++){

		x=a+(i*h);
		sum+=2*tan(x);

		}

	// Final calculation of area
	fx=(h/2)*sum;

	//Print the final values
	printf("Area under the curve for tan(x) from 0 to PI/3: %f\n",fx);
	printf("Value of log(2): %f\n",logf(2));
	printf("Absolute difference: %f\n", fabs(fx-logf(2)));
    	printf("Relative difference: %f\n", fabs(1-(fx/logf(2))));

	return 0;

}




