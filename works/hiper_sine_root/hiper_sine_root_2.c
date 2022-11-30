#include <stdio.h>
#include <math.h>

/*
* ------------------------ Challenge -----------------------
*
*   We are going to compute the hiperbolic sine function by using:
*   Taylor Series.
*
*   sinh(sqrt( x)) = √x  * ∑{∞}{n=0} x^(n)/(2n+1)!  where 0 < x < ∞
*   
*   Recurring factor of the sum: 
*   
*   R = x / (2*k)(2*k + 1)
*
*   
* -----------------------------------------------------------
*/

/* Hiperbolic Sine Root of X  Function  */

double my_hiper_sine_root(double x){

// Local functions for hsine calculation.
	
	long double a, S; 
	int k = 0;
	int n = 500;
	double root_x = sqrt(x); // Root calculation

		
// Setting n = 3 for provisional value 
	
	// k = 0

	a = root_x*pow(x,k)/(1.); 
	S = a;
	//printf("%.2f\t%8.5f\t%8.5f\n",x,a,S);
	


	while(k<n){
		
		k++;
		 
		// Remember :  a0 = x
		a = a * (x)/((2*k)*(2*k+1));
		S = S + a;
		if (k == n-1){
			
			printf("x=%.2f\ta_n-1=%8.5Lf\tS_n-1=%8.5Lf\n",x,a,S);
	
		}
		if (k == n){
			
			printf("x=%.2f\ta=%8.5Lf\tS=%8.5Lf\n",x,a,S);
	
		}
	}

	return S;

}


int main()
{
	// Version 6  - Using Long Double in Hiperbolic Function. 

	// What do we need: 

	double x = 2.05; // dummy value to calculate. 
	double y, yy;   

	// Target value: 
	
	y = sinh(sqrt(x));

	printf("y = sinh(√%.2f) = %.5f\n",x,y);
	
	yy = my_hiper_sine_root(x);
	
	printf("y = my_hiper_sine_root(%.2f) = %.5f\n",x,yy);

    return 0;
}
