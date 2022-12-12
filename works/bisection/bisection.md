# Numerical Methods: Bisection Method

## What is The Bisection Method?  

The Bisection Method is a root-finding method that applies to any **continious** function for which one knows two values with opposite signs. 

The method bisects the interval defined by these two values and then a new interval is selected where the root is contained. This new interval is the middle point of the last interval explored.

This is an iterative process until we reach a certain degree of accuracy neart the root. Thus we say is the method converges. 

The method itself is very simple but is slow and it's only valid under certain circumstances. 

* **Condition 1** -  F(a) * F(b) < 0 : This means that between point A and B the function changes its sign. If F(a) * F(b) > 0  then there is no root or there are a even number of roots. 

* **Condition 2** - The function should be continiuos.

## How does the function looks like ? 

![HiperSineRootX](https://github.com/AikaHorizon333/RTR105/blob/main/works/Series/hiper_sine_root/hiper_sine_root_IMG.png)


Before showing the code, at first sight we can tell that the function is not defined for values  where x<0 and the function does not have any root beyond zero. 

This quick inspection tell us that no matter wich values of a and b we choose, the method will not work since the only root for this function is zero. 

## How the code looks like: Bisection Method.  


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


                printf("%.2d. Iterations: sin(%7.3f = %7.3f\t)", k,a,$
                printf("sinh(√%7.3f)=%7.3f\n",x,moded_sinhr(x,c));
                printf("sinh(√%7.3f)=%7.3f\n",b,moded_sinhr(b,c));

                }
	
	
        printf("Root Found at x = %.3f, sinh(√x)=%.3f\n",x,moded_sinh$

```


