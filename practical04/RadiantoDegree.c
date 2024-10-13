#include<stdio.h>
#include<math.h>

float tan_array[12];
int degree_array[12];
int main(){

	// Initialize variables
	float a,b,b_rad,fx,sum,n,h,x;
	int i, degree; 

	// Setting the integration limits and no. of divisions
	a=0;
	b=60;
	n=12;
	h=((b-a)/n)*(M_PI/180);

	// Sum of first part tan(0) and tan (pi/3)
    b_rad=(M_PI * b)/180;
	sum=tan(a)+tan(b_rad);
    degree_array[0]=0;
    degree_array[12]=60;
    tan_array[0]=tan(a);
    tan_array[12]=tan(b_rad);

	// Trapezoidal Rule: For-loop for calculating the sum of all other tan values
	for(i=1;i<n;i++){

		x=(i*h);
        tan_array[i]=tan(x);
        degree_array[i]=i*h*57.2958;
		sum+=2*tan(x);
    
		}

	// Final calculation of area
	fx=(h/2)*sum;

	//Print the final values
	printf("\nArea under the curve for tan(x) from 0 to PI/3: %f\n",fx);
    printf("\nTan values for each radian values and respective degree values are:\n");
    for (i=0;i<=n;i++){
        printf("%f    %d degrees\n",tan_array[i],degree_array[i]);
    }

	return 0;

}