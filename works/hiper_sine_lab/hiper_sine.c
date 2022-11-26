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

	// What do we need: 

	double x = 2.05; // dummy value to calculate. 
	double y, a0, a1, a2, a3, S0, S1, S2, S3; // Variables to stablish the calculations. 

	// Target value: 
	
	y = sinh(x);

	printf("y = sinh(%.2f) = %.2f\n",x,y);

	// What happens when n = 0 
	
	
	a0 = pow(x,2*0 + 1)/(1.); 
	S0 = a0;
	printf("%.2f\t%8.2f\t%8.2f\n",x,a0,S0);
	
	a1 = pow(x,2*1 + 1)/(1*1*2*3); 
	S1 = S0 + a1;
	printf("%.2f\t%8.2f\t%8.2f\n",x,a1,S1);

	a2 = pow(x,2*2 + 1)/(1*1*2*3*4*5); 
	S2 = S1 + a2;
	printf("%.2f\t%8.2f\t%8.2f\n",x,a2,S2);

	a3 = pow(x,2*3 + 1)/(1*1*2*3*4*5*6*7); 
	S3 = S2 + a3;
	printf("%.2f\t%8.2f\t%8.2f\n",x,a3,S3);
    

    return 0;
}
