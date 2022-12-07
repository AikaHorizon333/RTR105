#include <stdio.h>
#include <math.h>

/*
*
*	BISECTION METHOD
*	
*	HIPERBOLIC SINE X  FUNCTION 
*
*	VERSION 3 - 
*	
-	CHALLENGES: 	
-	FIND THE ROOT OF HIPERBOLIC SINE INSTEAD OF SINE X OR SINH(√X)
-	ANSWERE SHOULD BE CLOSE TO 0.
*/

// Global Variables 

float a,b,c,x,dx; // Inner Variables
float sin_a, sin_b;

// Modded Sinh

float moded_sin(float x, float c){
	return sin(x) - c;
	}


void load_global(){

	printf("Please, input the lower boudary of the region: A\n");
	scanf("%f",&a);
	printf("Please, input the upper boudary of the region: B\n");
	scanf("%f",&b);
	printf("Please, input a C value f(x) = C, for f(x)= 0 C = 0\n");
	scanf("%f",&c);
	printf("Please, input a precission value ex. 1e-3\n");
	scanf("%f",&dx);
	printf("Your range is [%.5f;%.5f] and f(x) = %.5f, with dx = %.5f\n",a,b,c,dx);
}

int main(){
	
	printf("Hi! We are going to calculate the roots for:\nf(x)= sin(x) = c\n");
	
	// Global Variable Initialization.
	
	/*
	a = 0;
	b = 2*M_PI;
	c = 0;
	dx = 1.e-3;
	*/

	load_global();

	// Iteration Counter 
	int k = 0;
	

	// FA and FB values 
	sin_a = moded_sin(a,c); 
	sin_b = moded_sin(b,c);

	// The Method is not Valid
	if(sin_a*sin_a>0){

		printf("\nInterval [%.5f;%.5f] function sin(x)\n",a,b);
		printf("\nNo Roots(Or Even number of Roots)\n");
		return 1;
	}
	
	printf("sin(%7.5f)=%7.5f\t\t\t\t",a,moded_sin(a,c));
	printf("sin(%7.5f)=%7.5f\n",b,moded_sin(b,c));


	while((b-a)>dx){
	
		k++;
		x = (a+b)/2.;
		
		if(sin_a*moded_sin(x,c)>0){

			a = x;
		}
		
		else{b=x;}
		
		printf("%.2d. Iterations: sin(%7.5f) = %7.5f\t", k,a,moded_sin(a,c));
		printf("sin(%7.5f)=%7.5f\n",x,moded_sin(x,c));
		printf("sin(%7.5f)=%7.5f\n",b,moded_sin(b,c));
	
		}	

	printf("Root Found at x = %.5f, sin(x)=%.5f\n",x,moded_sin(x,c));
	

	return 0;
}
