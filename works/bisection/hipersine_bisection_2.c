#include <stdio.h>
#include <math.h>

/*
*
*	BISECTION METHOD
*	
*	HIPERBOLIC SINE ROOT X  FUNCTION 
*
*	VERSION 2 - 
*	
-	CHALLENGES: 	
*	VALUE OF A
*	VALUE OF B
*	VALUE OF C (NEW CENTER)
*	VALUE OF DX
-	CALCULATED VALUE OF X FOR F(X) = C BETWEEN A AND B
-	CALCULATED VALUE OF F(X) FOR X
-	USED NUMBER OF ITERATIONS FOR X
*
*/

// Global Variables 

float a,b,c,x,dx; // Inner Variables
float sinh_a, sinh_b;


// Modded Sinhr

float moded_sinhr(float x, float c){
	return sinh(sqrt(x)) - c;
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
	
	printf("Hi! We are going to calculate the roots for:\nf(x)= sinh(√x) = c\n");
	
	// Global Variable Initialization.	
	//a = 0.0001;
	//b = 1.0000;
	//c = 0;
	//dx = 1.e-3;

	load_global();

	// Iteration Counter 
	int k = 0;
	

	// FA and FB values 
	sinh_a = moded_sinhr(a,c); 
	sinh_b = moded_sinhr(b,c);
	

	// The Method is not Valid
	if(sinh_a*sinh_b>0){

		printf("\nInterval [%.5f;%.5f] function sinh(√x)\n",a,b);
		printf("\nNo Roots(Or Even number of Roots)\n");
		return 1;
	}
	
	printf("\nsinh(√%7.3f)=%7.3f\t\t\t",a,moded_sinhr(a,c));
	printf("sinh(√%7.3f)=%7.3f\n",b,moded_sinhr(b,c));


	while((b-a)>dx){
	
		k++;
		x = (a+b)/2.;
		
		if(sinh_a*moded_sinhr(x,c)>0){

			a = x;
		}
		
		else{b=x;}
		
		printf("%.2d. Iterations: sin(%7.5f = %7.5f\t)", k,a,moded_sinhr(a,c));
		printf("sinh(√%7.5f)=%7.5f\n",x,moded_sinhr(x,c));
		printf("sinh(√%7.5f)=%7.5f\n",b,moded_sinhr(b,c));
	
		}	

	printf("Root Found at x = %.3e, sinh(√x)=%.3e\n",x,moded_sinhr(x,c));
	

	return 0;
}
