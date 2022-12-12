# Numerical Methods: Bisection Method

## What is The Bisection Method?

The Bisection Method is a root-finding method that applies to any **continious** function for which one knows two values with opposite signs. 

The method bisects the interval defined by these two values and then a new interval is selected where the root is contained. This new interval is the middle point of the last interval.

This is an iterative process until we reach a certain degree of accuracy withe root. Also known as convergence of the method. 

The method at itself is very simple but is slow and it is only valid under certain circumstances. 

Condition 1 -  F(a) * F(b) < 0 : This means that between point A and B the function changes its sign. If F(a) * F(b) > 0  then there is no root or there are a even number of roots. 

Condition 2 - The function should be continiuos. 
