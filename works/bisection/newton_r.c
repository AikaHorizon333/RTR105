#include <stdio.h>
#include <math.h>

/*
*
*	NEWTON-R METHOD
*	
*	x^2 FUNCTION 
*
*	VERSION 1 - 
*	
-	CHALLENGES: 	
-	FIND THE ROOT OF  x^2
-	ANSWERE SHOULD BE CLOSE TO 0.
*
*
*	x = xi - f(x)/f'(x)
*
*/

float funx(float x){return pow(x,2);}

float dfunx(float x){return 2*x;}

int main(){
	
	float  x0 = 1;
	float xi;


	for(int i  = 0; i<10; i++){
	
		xi = x0 - funx(x0)/dfunx(x0);
	 
		printf("Interation: %d. - X = %7.5f\n",i,xi);
		
		x0 = xi;
	
	} 

	return 0;
}
