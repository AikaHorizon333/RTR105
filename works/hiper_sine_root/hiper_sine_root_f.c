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


/* Global Variables */

double x;  
double y, yy;   


/* Hiperbolic Sine Root of X  Function  */

double my_hiper_sine_root(double x){

// Local functions for hsine calculation.
	
	long double a, S; 
	int k = 0;
	int n = 500;
	double root_x = sqrt(x); // Root calculation

	a = root_x*pow(x,k)/(1.); 
	S = a;
		

	while(k<n){
		
		k++;
		 
		// Remember :  a0 = x
		a = a * (x)/((2*k)*(2*k+1));
		S = S + a;
		if (k == n-1){
			
			printf("\nx=%.2f\ta_n-1=%8.5Le\tS_n-1=%8.5Lf\n",x,a,S);
	
		}
		if (k == n){
			
			printf("\nx=%.2f\ta=%8.5Le\tS=%8.5Lf\n",x,a,S);
	
		}
	}

	return S;

}



int  ReadText(){

	char *filename = "hiper_sine_root_ASCII.txt";
	FILE *fp = fopen(filename, "r");

	if(fp == NULL){
		printf("Error: could not open file %s", filename);
		return 1;
	}

	// Reading line by line
	
	const unsigned MAX_LENGTH = 256;
	char buffer[MAX_LENGTH];

	while (fgets(buffer, MAX_LENGTH, fp)){
		
		printf("%s", buffer);
	
	}

	// Close the file.
	fclose(fp);

	return 0;

}


double  PromtText(){
	
	double t;
	
	printf("\nWrite a Value for X:\n ");
	scanf("%lf",&t);
	printf("\nCalculating sinh(√x) with x = %f\n", t);
	printf("\n... ... ... ... ...\n");

	return t;
}



// Main Function


int main()
{
	// Version 7  - Added User interaction.
	// 	      - Upgraded CLI printing.

	// What do we need: 

	ReadText();

	// Target value: 
	
	x = PromtText();
	
	y = sinh(sqrt(x));

	printf("\ny = sinh(√%.2f) = %.5f\n",x,y);

	// Our Aproximation
	
	yy = my_hiper_sine_root(x);
	
	printf("\ny = my_hiper_sine_root(%.2f) = %.5f\n",x,yy);

    return 0;
}
