#include <stdio.h>
#include <math.h>
#include <stdlib.h>
/*

   DERIVATIVE LAB WORK

   Derivative of hiper Sine SQRT x 

ToDo:

	Create arrays to store values.
	Create the function
	Create a system of 6 colums x fx dfx sdfx 2dfx s2df	
			size :      N N  N    N-1  N	N-2
*/


// You have to finish second derivative ><

float funx(float x){

	//return sinh(sqrt(x));
	return sin(x);
	}

float dfunx(float x, float delta_x){

	return (funx(x + delta_x)-funx(x))/delta_x;

	}

float sdfunx (float y2, float y1, float x2, float x1){

	return (y2-y1)/(x2-x1);
	
}


// Second Derivative Functions. 


float second_dfunx(float x, float delta_x){

	float A = x + delta_x;

	return (dfunx(A,delta_x)-dfunx(x,delta_x))/delta_x;

}


int main(){
	// Adding Header
	printf("\t\t\tHiperbolic Sin Root X\n");

	
	float a = 0, b = 2 * M_PI, delta_x = 1e-2;


	// Create the arrays

	float* x;
	int N = (b-a)/delta_x + 1 ;
	x = (float*)malloc((N)*sizeof(float));
	if(x == NULL){exit(1);}

	printf("Size of X array in elements - %d\n",N);

	float* fx;
	fx = (float*)malloc((N)*sizeof(float));
	if(fx == NULL){exit(1);}


	float* dfx;
	dfx = (float*)malloc((N)*sizeof(float));
	if(dfx == NULL){exit(1);}

	float* sdfx;
	sdfx = (float*)malloc((N)*sizeof(float));
	if(sdfx == NULL){exit(1);}

	float* second_dfx;
	second_dfx = (float*)malloc((N)*sizeof(float));
	if(second_dfx == NULL){exit(1);}

	float* s_second_dfx;
	s_second_dfx = (float*)malloc((N)*sizeof(float));
	if(s_second_dfx == NULL){exit(1);}




	// Starting column. 
	
	printf("\tx\t\tF(x)\t\tF\'(x)\t\tsF\'(x)\t\tF\'\'(x)\t\tsF\'\'(x)\n");


	// Adding the base case to the FX Arrray.


	int i = 0;
	x[i] = a;
	fx[i]= funx(x[i]);
	dfx[i]= dfunx(x[i],delta_x);
	second_dfx[i]=second_dfunx(x[i],delta_x);
      	//printf("%10.2f\t%10.2f\t%10.2f\t%10.2f\n",x[i],fx[i],dfx[i],second_dfx[i]);	
	i++;

// Calculate F(x) and F'(x) regular method.

	while(i<N){
		
		x[i] = x[i-1]+ delta_x;
		fx[i]= funx(x[i]);
		dfx[i]= dfunx(x[i], delta_x);
		second_dfx[i] = second_dfunx(x[i], delta_x);
	//	printf("%10.2f\t%10.2f\t%10.2f\n",x[i],funx(x[i]),dfunx(x[i], delta_x));
		i++;
	}

	// Reload 
	i = 0;
	sdfx[i] = sdfunx(fx[1+i],fx[i],x[1+i],x[i]); 
	s_second_dfx[i]= sdfunx(dfx[1+i],dfx[i],x[1+i],x[i]);
	printf("%10.3f\t%10.3f\t%10.3f\t%10.3f\t%10.3f\t%10.3f\n",x[i],fx[i],dfx[i],sdfx[i],second_dfx[i],s_second_dfx[i]);
	i++;


/// S First Derivative


	while(i<(N-1)){
		
		sdfx[i] = sdfunx(fx[1+i],fx[i],x[1+i],x[i]); 
		//printf("%10.2f\t%10.2f\t%10.2f\t%10.2f\n",x[i],fx[i],dfx[i],sdfx[i]);
		i++;
	}
		
/// S Second Derivative

	// Restart
	i = 1;
	
	while (i<(N-2)){

		s_second_dfx[i] = sdfunx(sdfx[1+i],sdfx[i],x[1+i],x[i]);
		printf("%10.3f\t%10.3f\t%10.3f\t%10.3f\t%10.3f\t%10.3f\n",x[i],fx[i],dfx[i],sdfx[i],second_dfx[i],s_second_dfx[i]);
		i++;

	}


// Aquí i = N-1


	printf("%10.3f\t%10.3f\t%10.3f\t%10.3f\t%10.3f\t\t--\n",x[i],fx[i],dfx[i],sdfx[i],second_dfx[i]);
	
	i++;
	
// Aquí i = N

	printf("%10.3f\t%10.3f\t%10.3f\t\t--\t%10.3f\t\t--\n",x[i],fx[i],dfx[i],second_dfx[i]);

return 10;
}
