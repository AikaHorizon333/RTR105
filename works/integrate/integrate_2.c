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

float rectangle_int(float a, float b, float p){

	printf("\nMidpoint method\n");

	float  h, integral1 = 0, integral2;
	int  n = 2;

	// Base case

	integral2 = (b-a)*(funx(a)+funx(b))/n; // h*(f(a)+f(b)) 

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

	return integral2;

}

float trapecio_int(float a, float b, float p){

	printf("\nTrapezoidal rule\n");


	int n = 2; 
	float h,k, integral1 = 0, integral2;
		
	// Base case

	integral2 = (0.5)*(b-a)*(funx(a)+funx(b))/n;
	
	for (int i = 1; i <= n ; i++){
	
		integral2 +=  (0.5)*(b-a)*2*funx(a+(b-a)*i/n)/n;

	
	}

	// Not the base case

	while(fabs(integral2-integral1)>p){

		n *= 2;
		h = (b-a)/n;
		k = 0.5*h;
		integral1 = integral2;
		
		integral2 = k*(funx(a)+funx(b));

	
		for (int i = 1; i <= n; i++){

			integral2 += h*funx(a+i*h);
	
		}
		
		
		printf("Area Value: %.4f\n", integral2);
	

	}

	return integral2;

}


// Precission Level.

float p = 1.e-3;
	

int main(){

	float a = 0, b = M_PI/2;
	
	rectangle_int(a,b,p);
	trapecio_int(a,b,p);

	return 0; 
}
