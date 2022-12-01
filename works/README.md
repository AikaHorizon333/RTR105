# Hiperbolic Sine Laboratory Work 1. 

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

```



Analyzing the first terms of the total sum, we can derive a Recurrent factor that will be latter implemented in the final version of the algorithm.




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

## Visualization of the Hiperbolic Sine vs the Expansion Series. 


![HiperbolicSinePlot](https://github.com/AikaHorizon333/RTR105/blob/main/works/hiper_sine_lab/hiper_sine.png)

In the plot is easy to spot that, as we increase the number of terms the more close the expansion series will be to the actual function.  





