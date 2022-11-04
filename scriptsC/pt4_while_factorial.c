/*
Write code, which will ask user to enter one decimal number and ask user about data type to use - char, int or long long. 

Calculate and show to user value of factorial of entered number 

or inform user that correctly calculate value of factorial of entered number with selected data type is not possible. 

For calculation use while loop. Calculation should be stopped immediately as soon as in it will appear error (to not to waste time). Algorithm should not use constants of limits of data types, value of factorial shouldn’t be compared with zero, verification of sign of value of factorial cannot be used, in calculations data type no other than user selected should be used. Upload solution code into Your RTR105 repository, insert here address of solution code.
*/

#include <stdio.h>




int main() {
    
   
    int factorial = 17;


     /* Factorial Machine */

    int v = 1;
    int i =1;
    int control;
    int lastValue;

    while(i<=factorial){

      // Factorial 0 is 1 
      if(factorial==0){v=1; break;}
    
      lastValue = v;
      v *=i; 
      control = v/i;
    
      if(control==lastValue){   

          printf("OK\n");
          i++;   
      }

      else{
          printf("\nAra ara, we dont support this value :(\n");
          break;
      }
    
    }

    
    printf("V: %d\n",v);
    
    
    return 0;
}