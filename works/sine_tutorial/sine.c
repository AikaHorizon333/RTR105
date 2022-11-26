#include <stdio.h>
#include <math.h>


/*
*
*	This is a test for the lab work 01 and  VIM
*	
* 	We are going to compute the Sine function using Taylor series.
*
*	sin x  = ∑{∞}{k=0} (-1)^k/(2k+1)! * x^(2k+1)
*	
*	The first iteration of the code will aproximate y using a max value of 3 
*	
*	IMPORTANT: the larger the value, the result will be more exact.
*	
*	K --> ∞ ; Ak --> 0
*
*	S0 = A0
*
*	S1 = A0 + A1 = S0 + A1
*	
*	S2 = A0 + A1 + A2 = S1 + A2 
*	 
*/
	
// Taylor sine function: 

double my_sine(double x, int n){

	// Global Variables: 

	
	double y, a, S; // Variable container to make the SUM.
	
	int k = 0;	// Loopable variable. 


	a =  pow(-1,k)*pow(x,2*k+1)/(1.);
	S = a;

	printf("x = %.2f\ta0 = %8.2f\tS0 = %8.2f\n",x,a,S);
	

	while(k < n){  

		k++;
		a =  a * (-1) *x*x / ((2*k)*(2*k+1));
		S = S+a;
		if(k == n-1){
			printf("%d\n",k);
			printf("x = %.2f\ta_n-1 = %8.2f\tS_n-1 =%8.2f\n",x,a,S);
			}
		
		if(k == n){
			printf("%d\n",k);
			printf("x = %.2f\ta_n = %8.2f\tS_n =%8.2f\n",x,a,S);
			}


		}	 

		return S;


}

int main(){


	// What do we need
	// Final Version: 	- Only one entire S and one A.
	//            		- We are adding the loop factor. K.
	//	  		- We are constructing the loop.
	//			- We are creating the functions. 

	
	double x = 2.05; // The value that we need to compute. 
		
	double y, yy;
	
	int n = 3;	// Number of loops.

	y = sin(x); // This is calculated by the library. 


	printf("Standard function y=sin(%.2f)=%.2f\n",x,y);
	printf("x\tA\tS\n");
	
	yy = my_sine(x,n);
	printf("Taylor  function y=my_sine(%.2f)=%.2f\n",x,yy);


return 0;
}
