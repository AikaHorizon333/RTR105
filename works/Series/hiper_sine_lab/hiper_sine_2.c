#include <stdio.h>
#include <math.h>

/*
* ------------------------ Challenge -----------------------
*
*   We are going to compute the hiperbolic sine function by using:
*   Taylor Series.
*
*   sinh x = x + x^3/3! + x^5/5! + x^7/7! + ... = ∑{∞}{n=0} x^(2n+1)/(2n+1)!
*   
*   We are interested in this part
*   
*   ∑{∞}{n=0} x^(2n+1)/(2n+1)!
*
* -----------------------------------------------------------
*/

int main()
{
	// Version 2 - Improved  Case: Improving the memory.  

	// What do we need: 

	double x = 2.05; // dummy value to calculate. 
	double y, a, S; // Variables to stablish the calculations. 
	int k = 0; // Varaible index of the sum.

	// Target value: 
	
	y = sinh(x);

	printf("y = sinh(%.2f) = %.2f\n",x,y);

	// What happens when n = 0 
	
	// k = 0

	a = pow(x,2*k + 1)/(1.); 
	S = a;
	printf("%.2f\t%8.5f\t%8.5f\n",x,a,S);
	


	while(k<3){
		
		k++;
		a = pow(x,2*k + 1)/((2*k)*(2*k+1)); 
		S = S + a;
		printf("%.2f\t%8.5f\t%8.5f\n",x,a,S);

	}

    return 0;
}
