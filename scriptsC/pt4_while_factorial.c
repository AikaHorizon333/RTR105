/*
Write code, which will ask user to enter one decimal number and ask user about data type to use - char, int or long long. 

Calculate and show to user value of factorial of entered number 

or inform user that correctly calculate value of factorial of entered number with selected data type is not possible. 

For calculation use while loop. Calculation should be stopped immediately as soon as in it will appear error (to not to waste time). Algorithm should not use constants of limits of data types, value of factorial shouldn’t be compared with zero, verification of sign of value of factorial cannot be used, in calculations data type no other than user selected should be used. Upload solution code into Your RTR105 repository, insert here address of solution code.
*/

#include <stdio.h>

// Global variables:

int factorial;
int dataType;
char handle1;
long long handle2;
unsigned long long handle3;

// Casting functions.
char toChar(){
    return (char)(factorial);
}

long long toLongLong(){
    return (long long )(factorial);
}

unsigned long long toUnsignedLongLong(){
    return (unsigned long long )(factorial);
}

// Flag

void flagError(){
    printf("\nAra ara, we dont support that value !!! :(\nResult too Large for dtype.\n");
}

void factorialInt(int factorial){
    
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

          i++;   
      }

      else{
          flagError();
          return;
      }
    
    }
    
    printf("factorial of %d: %d\n",factorial,v);
    
}

void factorialChar(char factorial){
    
    /*Factorial Machine*/
    
    char i = 1;
    char v = 1;
    char control;
    char lastValue;

    while(i<=factorial){

      // Factorial 0 is 1 
      if(factorial==0){v=1; break;}
    
      lastValue = v;
      v *=i; 
      control = v/i;
    
      if(control==lastValue){   

          i++;   
      }

      else{
          flagError();
          return;
      }
    
    }

  printf("factorial of %d: %d\n",factorial,v);
    
}


void factorialLongLong(long long factorial){
    
    /*Factorial Machine*/
    
    long long i = 1;
    long long v = 1;
    long long control;
    long long lastValue;

    while(i<=factorial){

      // Factorial 0 is 1 
      if(factorial==0){v=1; break;}
    
      lastValue = v;
      v *=i; 
      control = v/i;
    
      if(control==lastValue){   

          i++;   
      }

      else{
          flagError();
          return;
      }
    
    }

   printf("factorial of %lld: %lld\n",factorial,v);
    
}

void factorialUnsignedLongLong(unsigned long long factorial){
    
    /*Factorial Machine*/

    unsigned long long i = 1;
    unsigned long long v = 1;
    unsigned long long control;
    unsigned long long lastValue;

    while(i<=factorial){

      // Factorial 0 is 1 
      if(factorial==0){v=1; break;}
    
      lastValue = v;
      v *=i; 
      control = v/i;
    
      if(control==lastValue){   

          i++;   
      }

      else{
          flagError();
          return;
      }
    
    }

    

   printf("factorial of %llu: %llu\n",factorial,v);
    
}



// MAIN FUNCTION

int main() {
    
   int repeat = 1;
    
    while(repeat){
    
    printf("Hello!, Let's calculate the Factorial of a Number\n");
    printf("Type a number: \n");
    scanf("%d", &factorial);
    printf("Which data type would you prefere to use:\nint [1], char [2], long long [3], unsigned long long [4]\n");
    scanf("%d", &dataType);
    
    switch(dataType){
        
        case 1:
            printf("\nIntegers, ok\n");
            printf("factorial: %d\n",factorial);
            factorialInt(factorial);
            break;
        case 2:
            printf("\nChar, ok\n");
            printf("factorial: %d\n",factorial);
            if(factorial>127){
                
                printf("Value to large for type selected, try another dtype!");
                return 0;
            }
            else{
                handle1 = toChar();
                factorialChar(handle1);
            }
            break;
        case 3:
            printf("\nLong Long, ok\n");
            printf("factorial: %d\n",factorial);
            handle2 = toLongLong();
            factorialLongLong(handle2);
            break;

        case 4:
            printf("\nUnsigned Long Long, ok\n");
            printf("factorial: %d\n",factorial);
            handle3 = toUnsignedLongLong();
            factorialLongLong(handle3);
            break;
        
        default:
            printf("Sorry I cannot understand u :(\n");
            break;
    }
    
    printf("Want to try again? yes [1] / no [0]\n");
    scanf("%d",&repeat);

    }
    printf("bye bye :D!");

    
    return 0;
}



// FACTORIAL FUNCTIONS:

