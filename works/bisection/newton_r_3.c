#include <stdio.h>
#include <math.h>

/*
*
*	NEWTON-R METHOD
*	
*	SINH(√X) FUNCTION 
*
*	VERSION 3 - 
*	
-	CHALLENGES: 	
-	FIND THE ROOT OF SINH(√X) 
-	ANSWERE SHOULD BE CLOSE TO 0.
*
*	NEWTON METHOD
*	x = xi - f(x)/f'(x)
*	
*/

float funx(float x){return sinh(sqrt(x));}

float dfunx(float x){return cosh(sqrt(x))/(2*sqrt(x));}


float abs_value(float x){

	if(x<0){return x * -1;}
	
	else {return x;}
	}




int main(){
	
	float  x0 = 1, dx = 1e-05;
	float xi;

	int k = 0;

	while(x0>dx){
		k++;	
		xi = x0 - funx(x0)/dfunx(x0);
		xi = abs_value(xi);
		x0 = xi;
	
	} 

	printf("Iteration %d. X = %7.5e, f(X) = %7.5e\n",k,x0,funx(x0));
	return 0;
}
