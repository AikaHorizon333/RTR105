#include <stdio.h>
#include <math.h>

/*

	Integration using Numeric Methods. 
	
	Version 1

	Sine function. 

*/


float funx(float x){
	
	return sin(x);
}


// Precission Level.

float p = 1.e-3;


int main(){

	float a = 0, b = M_PI/2, h, integral1 = 0, integral2;
	int  n = 2;

	// Base case

	integral2 = (b-a)*(funx(a)+funx(b))/n; 

	// Getting a more precisse value 

	while (fabs(integral2-integral1)>p){

		n *= 2;
		
		h = (b-a)/n; // Number of divisions ( base)
		integral1 = integral2; // Save the previous Value
		integral2 = 0; // Reset Value

		for(int i = 0; i < n; i++){

			integral2 += h*funx(a+(i+0.5)*h);
			
	
		}
	
		printf("Area Value: %.4f\n", integral2);

	}

return 0; 
}
