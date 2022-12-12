# Hiperbolic Sine Laboratory Work 1 

We are going to compute the value of sinh(√x) function by using Taylor Series.  

Challenges to beat: 

	1. Express the Series of Sinh(√x) by ASCII drawing.
	2. Function Definition in the form of text comment.
	3. Expression of recurrence factor of Taylor Series of Sinh.
	4. Dialog with the user for obtaining value of x. 
	5. Value of the penultimate term.
	6. Value of the last term. 
	7. Calculate and show the value of the function by Series.
	8. Calculate and show the value of the function by math library. 



## Expansion Series : What are they ? 

The Taylor Expansion or the Taylor Series of a function is an infinite sum of terms expressed in the form of the function's derivatives at a single point.  


A Taylor series is also known as MacLaurin series when zero is the point where the derivatives are considered.   

The partial sum formed by the first n+1 terms of a Taylor series is a polynomial of degree n that is called the nth Taylor Polynomial.  

These polynomials are aproximations of a function which become better as n increases.  
 

## Hiperbolic Sine


The Hiperbolic Sine of X can be aproximated by the following expression:


```
			  500
			-------
			\		 (2 * K + 1)
			 \		X
	sinh(x)	  =       \      --------------------------
			  /	
			 /		(2 * K + 1 )!
			/
			-------
			 K = 0

```



Analyzing the first terms of the total sum, we can derive a Recurrent factor (R) that will be latter implemented in the final version of the algorithm.


If for each term computed of the sum, R --> 0 then, the factor A will also aproach to zero.

This means that the Total Sum is getting close to a certain value, the we can say that the Series is convergin.   

R may be represented as a ratio between two factors Ak and Ak-1

R = Ak/Ak-1


```
	Recurrent Factor: 	

	
			 X^2
	R   =	 ___________________
		 ( 2 * K )(2 * K + 1)    



```


First Version of the code where the first 4 terms of the sum are expressed: 


```

...

	a0 = pow(x,2*0 + 1)/(1.); 
	S0 = a0;
	
	a1 = pow(x,2*1 + 1)/(1*1*2*3); 
	S1 = S0 + a1;

	a2 = pow(x,2*2 + 1)/(1*1*2*3*4*5); 
	S2 = S1 + a2;

	a3 = pow(x,2*3 + 1)/(1*1*2*3*4*5*6*7); 
	S3 = S2 + a3;
    
...

```

Later version of the code where the Recurrent factor is used to calculate each partial sum in order to pass the total sum. 

```
...
	a = pow(x,2*k + 1)/(1.); 
	S = a;

	while(k<n){
		
		k++;
		// Remember :  a0 = x
		
		a = a * (x*x)/((2*k)*(2*k+1));
		S = S + a;
		
	}

...

```

Output of the program : 

```


-- S e r i e s  C a l c u l a t i o n --

		  500
		-------
		\		 (2 * K + 1)
		 \		X
sinh(x)	  =       \      --------------------------
		  /
		 /		(2 * K + 1 )!
		/
		-------
		 K = 0



	 	 X^2
R   =	 ___________________
	 ( 2 * K )(2 * K + 1)
y = sinh(2.05) = 3.81958
x=2.05	a_n-1=6.87801e-2254	S_n-1= 3.81958
x=2.05	a=2.88760e-2259	S= 3.81958
y = my_hiper_sine(2.05) = 3.81958




```

The output of the program compares the hiperbolic sine function from the C math library againts the value obtained by the Expansion series.  

For practical purposes at precision of 1e-5 both, the function from the math library and out computed value are the same.  


### Visualization of the Hiperbolic Sine vs the Expansion Series. 


![HiperbolicSinePlot](https://github.com/AikaHorizon333/RTR105/blob/main/works/Series/hiper_sine_lab/hiper_sine.png)

In the plot is easy to spot that, as we increase the number of terms the more close the expansion series will be to the actual function.  

Also, it is possible to note that the more terms we compute, the range of the expansion increases. For this particular function, it is possible to calculate f(x) for a small value of x without the need to calculate a large value of terms. 



## Hiperbolic Sine of √x


The function above serve as an example for the aproach that will be taken for analyzning the target function: sinh(√x) 

The expansion series of the target function may be written as: 


```
                           500
                        ---------
                        \
                ___      \                       X ^ K
sinh(√x) =  _  /          \             ________________________
             \/  X        /
                         /                   ( 2 * K + 1 )!
                        /
                        ---------
                          K = 0
```


By analyzing the factor Ak and Ak-1 for the series, the Recurrent factor is derived. 



```

                                     X
Recurrent Factor =      ___________________________

                         ( 2 * K ) * ( 2 * K + 1 )


```

The code of the program was thought the following way: 


First we compute the case zero A0: 

```

...
	 
// Local functions for hsine calculation.

	long double a, S;
	int k = 0;
	int n = 500;
	double root_x = sqrt(x); // Root calculation


	a = root_x*pow(x,k)/(1.);
	S = a;

...


```

The for the recurring factor inside the loop

```

	while(k<n){

			k++;

			a = a * (x)/((2*k)*(2*k+1));
			S = S + a;

			
		}

```

The output of the program, using x = 2.05 as input value: 

```

-- S e r i e s  C a l c u l a t i o n --

			   500
			---------
			\
	    	___	 \		         X ^ K
sinh(√x) =  _  /          \		________________________
	     \/	 X        /
			 /                   ( 2 * K + 1 )!
			/
			---------
			  K = 0


				     X
Recurrent Factor =  	___________________________

			 ( 2 * K ) * ( 2 * K + 1 )





Write a Value for X:
 2.05

Calculating sinh(√x) with x = 2.050000

... ... ... ... ...

y = sinh(√2.05) = 1.97363

x=2.05	a_n-1=1.30740e-2409	S_n-1= 1.97363

x=2.05	a=2.67750e-2415	S= 1.97363

y = my_hiper_sine_root(2.05) = 1.97363



```

As with the example function, the result obtained from the expansion series and the one obtained by the math library is identical for a precision of 1e-05.

Aditionally, The analysis made by the program shows that as for higher values of K = 499 and K = 500 the factors computed are in the order of magnited of 1e-2409 and 1e-2415, values that for practial purposes are 0.

### Visualization of the Hiperbolic Sine vs the Expansion Series. 


![HiperSineRoot](https://github.com/AikaHorizon333/RTR105/blob/main/works/Series/hiper_sine_root/hiper_sine_root_IMG.png )

As with the example function, the graphic shows how for each iteration in the expansion series, the more it gets close to the targe function.

For the function, the expansion up to the 4 factor were plotted. 





