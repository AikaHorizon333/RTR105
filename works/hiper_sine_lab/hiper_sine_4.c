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

/* Hiperbolic Sine Function  */

double my_hiper_sine(double x){

// Local functions for hsine calculation.
	
	long double a, S; 
	int k = 0;
	int n = 500;
		
// Setting n = 3 for provisional value 
	
	// k = 0

	a = pow(x,2*k + 1)/(1.); 
	S = a;
	//printf("%.2f\t%8.5f\t%8.5f\n",x,a,S);
	


	while(k<n){
		
		k++;
		//a = pow(x,2*k + 1)/((2*k)*(2*k+1)); 
		// Remember :  a0 = x
		a = a * (x*x)/((2*k)*(2*k+1));
		S = S + a;
		if (k == n-1){
			
			printf("x=%.2f\ta_n-1=%8.5Le\tS_n-1=%8.5Lf\n",x,a,S);
	
		}
		if (k == n){
			
			printf("x=%.2f\ta=%8.5Le\tS=%8.5Lf\n",x,a,S);
	
		}
	}

	return S;

}


int ReadText(){

	char *filename = "hiper_sine_ASCII.txt";
	FILE *fp = fopen(filename, "r");
	
	if(fp == NULL){

		printf("Error: could not open file %s", filename);
		return 1;

	}
	
	// Reading line by line. 

	const unsigned MAX_LENGTH = 256;
	char buffer[MAX_LENGTH];
	
	while (fgets(buffer, MAX_LENGTH, fp)){
		
		printf("%s", buffer);
	
	}

	// Close the file.
	
	fclose(fp);
	return 0;


}


int main()
{
	// Version 3  - Read ASCII Aded.

	// What do we need: 

	double x = 2.05; // dummy value to calculate. 
	double y, yy;   
	
	ReadText();

	// Target value: 
	
	y = sinh(x);

	printf("y = sinh(%.2f) = %.5f\n",x,y);
	
	yy = my_hiper_sine(x);
	
	printf("y = my_hiper_sine(%.2f) = %.5f\n",x,yy);

    return 0;
}
