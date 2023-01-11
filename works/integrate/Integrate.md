# Integration


## What is an Integral?  

"An integral assigns numbers to functions in a way that describes displacement, area, volume, and other concepts that arise by combining infinitesimal data" 

"An integral can be interpreted as the signed area of the region in the plane that is bounded by the graph of a given function between two points in the real line"


## Numerical Methods: Riemann Sums.    

They are aproximantions of an integral by a finite sum. The sum is calculated by dissecting the area under the curve into shapes: rectangles, trapezoids, etc.

The area then is calculated by adding all the smaller areas together. 

Each type of sums has a degree of accuracy depending on the shape of the function to integrate. The accuraccy can be increased if the number of shapes is increased.

The sub-interval used in by the Riemann sumation methods can be calculated by:  

```
	h  = (b - a)/n 
```

Where `b` is the upper limit `a` is the lower limit and `n` is the number of subdivisions.  



## Riemann Sum: Midpoint rule.  

For the Midpoint rule the function is aproximated by the midpoint value at it's sub intervals: `f(a + h/2)` 


The resulting area will be: 

```
	S = h [ f(a + h/2) + f(a + (1/2 + 1)h) + ... + f(b - h/2) ]

```

The code implementation of the rule is the following: 

```

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


```

## Riemann Sum: Trapezoidal Rule.  


For the trapezoidal rule, the function is aproximated by the average of its values at the left and right endpoints of the sub intervals.


```

	 S  = h/2 [f(a) + 2f(a + h) + 2f(a + 2h) + ... + f(b) ]


```

The code implementation of the rule is the following  :



```
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
		

```



## Simpson Rule. 

This numerical method is far more powerful than the common Riemann sums, since it has a better approach to quadratic behavior. 


For a basic case where the step `h = (b-a)/2` the area can be computed by : 


```

	S = h/3[f(a) + 4f((a+b)/2) + f(b)]

```

For a larger number of steps n > 2; `Xi = a + ih` for `0 ≤ i ≤ n`; x0 = a and xn = b.


```

	S = h/3 [f(x0) + 4f(x1) + 2f(x2) + ... + 2f(xn-2)+4f(xn-1)+f(xn)]


```

The code implementation is the following: 


```
	float simpson_int(float a, float b, float p){

	printf("\nSimpson rule\n");


	int n = 2; 
	float h,k, integral1 = 0, integral2;
		
	// Base case: n = 2

	integral2 = ((b-a)/6)*(funx(a)+4*funx((a+b)/2)+funx(b));

	// Not the base case: n > 2.

	while(fabs(integral2-integral1)>p){

		n *= 2;
		h = (b-a)/n;
		k = h/3;
		integral1 = integral2; 
		
		integral2 = k*(funx(a)+funx(b)); // f(a) y f(b)

	
		for (int i = 1; i < n; i++){
			

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

	return integral2;


}

```


## Integrating sinh(√x)

The created program calculates the integral for sinh(√x) using the numeric methods described above.

For example, the integral of f(x) on the interval 0,5


Console output: 

```
	Integral of HiperSine Root X
	Please input a value for the lower limit a
	0
	Please input a value for the upper limit b
	5
	Please input a value for epsilon value p
	0.01
	Integration value for different Algorithms:

	Midpoint method
	Area Value: 11.9320
	Area Value: 11.9248

	Trapezoidal rule
	Area Value: 17.5320
	Area Value: 14.7320
	Area Value: 13.3284
	Area Value: 12.6230
	Area Value: 12.2684
	Area Value: 12.0903
	Area Value: 12.0009
	Area Value: 11.9561
	Area Value: 11.9336
	Area Value: 11.9224
	Area Value: 11.9167

	Simpson rule
	Area Value: 11.8015
	Area Value: 11.8717
	Area Value: 11.8970
	Area Value: 11.9061


```
For the integral of the function in the selected interval has a value of :

* Midpoint Method: 11.9248
* Trapezoidal rule: 11.9167  
* Simpson Rule: 11.9061

According to [WolframAlpha](https://www.wolframalpha.com/input?i=integrate+sinh%28sqrt%28x%29%29+from+0+to+5) the value is 11.911...


