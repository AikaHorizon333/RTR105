#include <stdio.h>
#include <math.h>

/*
*
*	BISECTION METHOD
*	
*	SINE FUNCTION EXAMPLE 
*
*	VERSION 2 : Modified Sine
*
*	Re centered Sine in point A.
*	
*	User promt.
*
*/

float moded_sine(float x, float A){
	
	return sin(x) - A ; 
}

void  main(){

	float a,x,delta_x,b,y,A;
	
	a = 0;
	b = 2*M_PI;
	
	printf("Please enter a A value for Sin(x) = A\n");
	scanf("%f", &A);
	
	x = a;	// Starting point.
	delta_x = 0.1; // Hardcoded precission Value. 
	printf("\tx\ty\n");

	// Bisection method Loop.
	
	while(x<b){
	
		printf("%10.1f,%10.1f\n",x,moded_sine(x,A));
	
		x += delta_x;
	}
		




}
