# Nice function
plot [0:15] sinh(sqrt(x))

# Taylor series. 
 
replot sqrt(x)
replot sqrt(x)*(1 + x/3!)
replot sqrt(x)*(1 + x/3! + x**2/5!)
replot sqrt(x)*(1 + x/3! + x**2/5!)
replot sqrt(x)*(1 + x/3! + x**2/5! + x**3/7!)
replot sqrt(x)*(1 + x/3! + x**2/5! + x**3/7! + x**4/9!)

