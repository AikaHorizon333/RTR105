# Numerical Methods: Bisection Method

## What is The Bisection Method?  

The Bisection Method is a root-finding method that applies to any **continious** function for which one knows two values with opposite signs. 

The method bisects the interval defined by these two values and then a new interval is selected where the root is contained. This new interval is the middle point of the last interval explored.

This is an iterative process until we reach a certain degree of accuracy neart the root. Thus we say is the method converges. 

The method itself is very simple but is slow and it's only valid under certain circumstances. 

* **Condition 1** -  F(a) * F(b) < 0 : This means that between point A and B the function changes its sign. If F(a) * F(b) > 0  then there is no root or there are a even number of roots. 

* **Condition 2** - The function should be continiuos.

## How does the function looks like ? 

![HiperSineRootX](https://github.com/AikaHorizon333/RTR105/blob/main/works/bisection/hipersine_function.png)


Before showing the code, at first sight we can tell that the function is not defined for values  where x<0 and the function does not have any root beyond zero. 

This quick inspection tell us that no matter wich values of a and b we choose, the method will not work since the only root for this function is zero. 

## How the code looks like: Bisection Method? 



From the main function of the program:


```
	// 1. Getting F(a) and F(b) Values.
       
	sinh_a = moded_sinhr(a,c);
        sinh_b = moded_sinhr(b,c);

	
	
	// 2. Check if the Bisection Method will work.
        // The Method is not Valid

        if(sinh_a*sinh_b>0){

                printf("\nInterval [%.5f;%.5f] function sinh(√x)\n",a$
                printf("\nNo Roots(Or Even number of Roots)\n");
                return 1;
        }

        printf("sinh(√%7.3f)=%7.3f\t\t\t\t",a,moded_sinhr(a,c));
        printf("sinh(√%7.3f)=%7.3f\n",b,moded_sinhr(b,c));

	// 3. Beggining of the iterative process. 
	
        while((b-a)>dx){
 
                 k++;
                 x = (a+b)/2.;

                 if(sinh_a*moded_sinhr(x,c)>0){

                         a = x;
                 }

                 else{b=x;}

                 printf("%.2d. Iterations: sin(%7.5f = %7.5f\t)", k,a,moded_sinhr(a,c    ));
                 printf("sinh(√%7.5f)=%7.5f\n",x,moded_sinhr(x,c));
                 printf("sinh(√%7.5f)=%7.5f\n",b,moded_sinhr(b,c));

                 }

         printf("Root Found at x = %.3e, sinh(√x)=%.3e\n",x,moded_sinhr(x,c));


```

After the quick inspection made. What if we run the code and input some values. 

Example 1 . A and B  on the range of the function

```
// Output of the program

	Hi! We are going to calculate the roots for:
	f(x)= sinh(√x) = c
	Please, input the lower boudary of the region: A
	0.01
	Please, input the upper boudary of the region: B
	2
	Please, input a C value f(x) = C, for f(x)= 0 C = 0
	0
	Please, input a precission value ex. 1e-3
	1e-5
	Your range is [0.01000;2.00000] and f(x) = 0.00000, with dx = 0.00001

	Interval [0.01000;2.00000] function sinh(√x)

	No Roots(Or Even number of Roots)


```

Example 2. A = 0 and B > A. 

```
// Output of the program

	Hi! We are going to calculate the roots for:
	f(x)= sinh(√x) = c
	Please, input the lower boudary of the region: A
	0.00
	Please, input the upper boudary of the region: B
	2
	103         return 0;
	Please, input a C value f(x) = C, for f(x)= 0 C = 0
	0
	Please, input a precission value ex. 1e-3
	1e-5
	Your range is [0.00000;2.00000] and f(x) = 0.00000, with dx = 0.00001

	sinh(√  0.000)=  0.000			sinh(√  2.000)=  1.935

	01. Iterations: sin(0.00000 = 0.00000	)sinh(√1.00000)=1.17520
	sinh(√1.00000)=1.17520
	02. Iterations: sin(0.00000 = 0.00000	)sinh(√0.50000)=0.76752
	sinh(√0.50000)=0.76752
	03. Iterations: sin(0.00000 = 0.00000	)sinh(√0.25000)=0.52110
	sinh(√0.25000)=0.52110
	04. Iterations: sin(0.00000 = 0.00000	)sinh(√0.12500)=0.36097
	sinh(√0.12500)=0.36097
	05. Iterations: sin(0.00000 = 0.00000	)sinh(√0.06250)=0.25261
	sinh(√0.06250)=0.25261
	06. Iterations: sin(0.00000 = 0.00000	)sinh(√0.03125)=0.17770
	sinh(√0.03125)=0.17770
	07. Iterations: sin(0.00000 = 0.00000	)sinh(√0.01562)=0.12533
	sinh(√0.01562)=0.12533
	08. Iterations: sin(0.00000 = 0.00000	)sinh(√0.00781)=0.08850
	sinh(√0.00781)=0.08850
	09. Iterations: sin(0.00000 = 0.00000	)sinh(√0.00391)=0.06254
	sinh(√0.00391)=0.06254
	10. Iterations: sin(0.00000 = 0.00000	)sinh(√0.00195)=0.04421
	sinh(√0.00195)=0.04421
	11. Iterations: sin(0.00000 = 0.00000	)sinh(√0.00098)=0.03126
	sinh(√0.00098)=0.03126
	12. Iterations: sin(0.00000 = 0.00000	)sinh(√0.00049)=0.02210
	sinh(√0.00049)=0.02210
	13. Iterations: sin(0.00000 = 0.00000	)sinh(√0.00024)=0.01563
	sinh(√0.00024)=0.01563
	14. Iterations: sin(0.00000 = 0.00000	)sinh(√0.00012)=0.01105
	sinh(√0.00012)=0.01105
	15. Iterations: sin(0.00000 = 0.00000	)sinh(√0.00006)=0.00781
	sinh(√0.00006)=0.00781
	16. Iterations: sin(0.00000 = 0.00000	)sinh(√0.00003)=0.00552
	sinh(√0.00003)=0.00552
	17. Iterations: sin(0.00000 = 0.00000	)sinh(√0.00002)=0.00391
	sinh(√0.00002)=0.00391
	18. Iterations: sin(0.00000 = 0.00000	)sinh(√0.00001)=0.00276
	sinh(√0.00001)=0.00276

	Root Found at x = 7.629e-06, sinh(√x)=2.762e-03

```

On the first experiment the program returns  advising that the function has no roots on the selected interval or if they exist, there is a even number of roots.  

As we know by analyzing the graph, there are no roots.  


On the second experiment, the program was able to aproximate to a root value.  

## Location of the calculated Root. 

![Located Root](https://github.com/AikaHorizon333/RTR105/blob/main/works/bisection/hipersine_bisection_root.png)

