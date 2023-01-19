#include <stdio.h>
#include <math.h>

/*

	Integration using Numeric Methods. 
	
	Version 5

	HiperSine function.
	
	Display number of iteration

*/


float funx(float x){
	

	return sinh(sqrt(x));
	//return sin(x);
}

float rectangle_int(float a, float b, float p){

	printf("\nMidpoint method\n");

	float  h, integral1 = 0, integral2;
	int  n = 2;
	int iteracion = 0;

	// Base case

	integral2 = (b-a)*(funx(a)+funx(b))/n; // h*(f(a)+f(b)) 

	// Getting a more precisse value 

	while (fabs(integral2-integral1)>p){

		n *= 2;
		iteracion++;
		h = (b-a)/n; // Number of divisions ( base)
		integral1 = integral2; // Save the previous Value
		integral2 = 0; // Reset Value

		for(int i = 0; i < n; i++){

			integral2 += h*funx(a+(i+0.5)*h);
			
	
			}
	
		printf("Area Value: %.4f\n", integral2);

		}

	printf("\nCalculated integral: %.4f. With %d Iterations.\n",integral2, iteracion);

	return integral2;

}

float trapecio_int(float a, float b, float p){

	printf("\nTrapezoidal rule\n");

	int iteracion = 0;
	int n = 2; 
	float h,k, integral1 = 0, integral2;
		
	// Base case

	integral2 = (0.5)*(b-a)*(funx(a)+funx(b))/n;
	
	for (int i = 1; i <= n ; i++){
	
		integral2 +=  (0.5)*(b-a)*2*funx(a+(b-a)*i/n)/n;

	
	}

	// Not the base case

	while(fabs(integral2-integral1)>p){
		iteracion++;
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
	
	printf("\nCalculated integral: %.4f. With %d Iterations.\n",integral2, iteracion);

	return integral2;

}


float simpson_int(float a, float b, float p){

	printf("\nSimpson rule\n");

	int iteracion  = 0;
	int n = 2; 
	float h,k, integral1 = 0, integral2;
		
	// Base case: n = 2

	integral2 = ((b-a)/6)*(funx(a)+4*funx((a+b)/2)+funx(b));

	// Not the base case: n > 2.

	while(fabs(integral2-integral1)>p){
		
		iteracion++;
		n *= 2;
		h = (b-a)/n;
		k = h/3;
		integral1 = integral2; 
		
		integral2 = k*(funx(a)+funx(b)); // f(a) y f(b)

	
		for ( int i = 1; i < n; i++){
			

			// 4's and 2's
			
			if(i%2){
			
				integral2 += k*4*funx(a+i*h);
			
			}
			
			else{
				
				integral2 += k*2*funx(a+i*h);
			
	
			}
		}
		
		
		printf("Area Value: %.4f\n", integral2);
	

	}

	printf("\nCalculated integral: %.4f. With %d Iterations.\n",integral2, iteracion);
	return integral2;


}



int main(){


	
	float a,b,p;
	//float a = 0, b = M_PI/2;
	printf("\nIntegral of HiperSine Root X\n");
	printf("Please input a value for the lower limit a\n");
	scanf("%f",&a);
	printf("Please input a value for the upper limit b\n");
	scanf("%f", &b);
	printf("Please input a value for epsilon value p\n");
	scanf("%f",&p);

	printf("Integration value for different Algorithms: \n");
	rectangle_int(a,b,p);
	trapecio_int(a,b,p);
	simpson_int(a,b,p);

	return 0; 
}
