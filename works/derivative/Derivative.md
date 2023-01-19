# Derivative

## What is a Derivative ? 

A derivative is a measure of how much a function changes as its input (or independent variable) changes. It  determines the  rate of change and slopes of curves. 

The derivate can be expressed as: 


```

	lim = f(x+h)-f(x) / h
	h->0

```

Also, by definition the derivative may be calculated from data using the slope equation.


```

	M = F(X_2) - F(X_1) / X_2 - X_1

```


## The Code: First Derivative

From the derivative definition to write code that will allow the user to get the derivative values of the funtion: 


```
	// From the limit definition:

	float dfunx(float x, float delta_x){  // <-- delta_x is h in the derivative definition.

		return (funx(x + delta_x)-funx(x))/delta_x;

	}

	// delta_x for the function will be a the degree of precission of the calculated value of the derivative. 

```


From the slope equation :


```
	// Slope definition

	float sdfunx (float y2, float y1, float x2, float x1){

		return (y2-y1)/(x2-x1);
	
	}

	// y2, y1 are the function values at points x2 and x1. 

```

What is funx()?  For this particular case funx is the function under study: sinh(√x)

```
	// Hiperbolic sine of root of x
	
	float funx(float x){

		return sinh(sqrt(x));
	
	}
	
	
```

## The Second Derivative. 


The second derivative can be computed by the same way the first derivative was determined. 


```

	lim  = f'(x+h) - f'(x) / h
	h->0



```


In code the second derivative may be written as: 

```

	float second_dfunx(float x, float delta_x){

		float A = x + delta_x; // A is x+h from the second d. deffinition.

		return (dfunx(A,delta_x)-dfunx(x,delta_x))/delta_x;

	}


```


## The code: Dynamic Arrays in C. 


For data storage and management, it is necessary to create dynamic arrays. This way the user may be able to change the degree of precission depending on its necessities. 


```
	// Dynamic Array code. 

	float* x;
	int N = (b-a)/delta_x + 1 ; // Number of "items" needed to store the values.
				    // B and A are the Last and First X values. 
	
	x = (float*)malloc((N)*sizeof(float)); // Memory "blocks" needed for the array. 
	if(x == NULL){exit(1);}


```


This way we create an array for the input data x, the function values fx, the derivative values dfx, the slope sdfx, the second derivative second_dfx and the slope for the second derivative second_dfx.



## The Code: Derivative Calculation using Limit Definition.


Since the slope function requires to know the value N+1, its necesary to calculate first the Base case and then the calculation using the slope formula becames faster. 

For the base case or X0, this is `a` value:

```

// Adding the base case to the FX Arrray.

	int i = 0; // First "item"
	x[i] = a;
	fx[i]= funx(x[i]); // F(x) calculation
	dfx[i]= dfunx(x[i],delta_x); // F'(x) calculation
	second_dfx[i]=second_dfunx(x[i],delta_x); // F''(x) calculation
	i++; // Next Item


```

For the Upcoming Values up to B:


```

	// Calculate F(x) and F'(x) regular method.

	while(i<N){
		
		x[i] = x[i-1]+ delta_x;
		fx[i]= funx(x[i]);
		dfx[i]= dfunx(x[i], delta_x);
		second_dfx[i] = second_dfunx(x[i], delta_x);
		i++;
	}



```
Up to here the Values of the Function F(x) and the first and second derivatives are known, but in order to calculate the derivatives using the slope formula it's necessary to traverse the F(x), F'(x) arrays. 


## The Code: Slope Functions

The calculation of the Derivatives using the slope formulas, require to go back to the first item, the base case. 

And from there stare going down. until "the last element"

For the first derivative, the total amount of values calculated is N-1 and for the second derivative is N-2.

```

	// Reload 
	i = 0;
	sdfx[i] = sdfunx(fx[1+i],fx[i],x[1+i],x[i]); 
	s_second_dfx[i]= sdfunx(dfx[1+i],dfx[i],x[1+i],x[i]);



	/// S First Derivative


	while(i<(N-1)){
		
		sdfx[i] = sdfunx(fx[1+i],fx[i],x[1+i],x[i]); 
		i++;
	}
		
	/// S Second Derivative

	// Restart
	i = 1;
	
	while (i<(N-2)){

		s_second_dfx[i] = sdfunx(sdfx[1+i],sdfx[i],x[1+i],x[i]);
		i++;

	}





```


## Output: The Derivatives


For the Hiperbolic Sine of √x the program output is the following. (First 10 values)

```

	Hiperbolic Sin Root X
Please input the low limit, a
0
Please input the upper limit, b
6.28
Please input the precission, delta_x
1e-2
Size of X array in elements - 629
	x		F(x)		F'(x)		sF'(x)		F''(x)		sF''(x)
     0.000	     0.000	    10.017	    10.017	  -584.403	  -584.403
     0.010	     0.100	     4.173	     4.173	   -95.473	   -95.473
     0.020	     0.142	     3.218	     3.218	   -49.156	   -49.156
     0.030	     0.174	     2.726	     2.726	   -31.247	   -31.247
     0.040	     0.201	     2.414	     2.414	   -22.079	   -22.079
     0.050	     0.225	     2.193	     2.193	   -16.641	   -16.641
     0.060	     0.247	     2.027	     2.027	   -13.105	   -13.105
     0.070	     0.268	     1.896	     1.896	   -10.652	   -10.652
     0.080	     0.287	     1.789	     1.789	    -8.869	    -8.869
     0.090	     0.305	     1.700	     1.700	    -7.525	    -7.525
    

	...



``` 


By Plotting ALL the data the following graph is obtained.


![AllDer](https://github.com/AikaHorizon333/RTR105/blob/main/works/derivative/plot.png)

## Conclusions

The data plotted above is not the best visual representation since everything is mixed up and the details get lost on the range of the calculated data. So, it will be splitted between the first and second derivative data


First Derivative:

![FirstDer](https://github.com/AikaHorizon333/RTR105/blob/main/works/derivative/plot_2.png)

The "two" curves are F(x) that correspond to the data from 1:2 and F'(x) that is the data from 1:3 but also it over laps with the data from 1:4.


The second derivative does not exist for the value 0 since it is the positive infinity, then it goes to a minimum and then starts increasing once again, creating a "U" shape.


The data overlaping between the two sets  means that both methods of calculation for the derivative are equaly effective.



Now, for the second derivative:


![SecondDer](https://github.com/AikaHorizon333/RTR105/blob/main/works/derivative/plot_3.png) 

This graph also shows two curves, the first one corresponding to the function F(x) and the second representing the second derivative. 

Once again the data sets of both methods gets overlaped with each other . 

Analysing the second derivative curve, we can say that does not exist for 0 since it is negative infinity. 

 
Both methods have shown the same quality of results, since the output is equivalent.  




