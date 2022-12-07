#include <stdio.h>
#include <math.h>

/*
*
*	BISECTION METHOD
*	
*	SINE FUNCTION EXAMPLE 
*
*	VERSION 1
*
*/

int main(){
	
	float a = 0.01, b = 1.5*M_PI, delta_x = 1.e-3; 
	float funkca, funkcb, funkcx, x; 
	int k = 0;

	funkca = sin(a); 
	funkcb = sin(b);
	

	// The Method is not Valid
	if(funkca*funkcb>0){

		printf("\nInterval [%.2f;%.2f] function sin(x)\n",a,b);
		printf("\nNo Roots(Or Even number of Roots)\n");
		return 1;
	}
	
	printf("sin(%7.3f)=%7.3f\t\t\t\t",a,sin(a));
	printf("sin(%7.3f)=%7.3f\n",b,sin(b));


	while((b-a)>delta_x){
	
		k++;
		x = (a+b)/2.;
		
		if(funkca*sin(x)>0){

			a = x;
		}
		
		else{b=x;}
		
		printf("%.2d. Iterations: sin(%7.3f = %7.3f\t)", k,a,sin(a));
		printf("sin(%7.3f)=%7.3f\n",x,sin(x));
		printf("sin(%7.3f)=%7.3f\n",b,sin(b));
	
		}	

	printf("Root Found at x = %.3f, sin(x)=%.3f\n",x,sin(x));
	




	return 0;
}
