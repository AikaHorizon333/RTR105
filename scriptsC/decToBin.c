/*
Write code, which will ask user to insert one natural number (use char data type). By using bitwise operations - << and >> (also called as bit shifts), 
prepare and output binary code, which corresponds to entered number. 
Upload solution code into Your RTR105 repository, insert here address of solution code.
*/

#include <stdio.h>


// Variables
char decChar;

int decNumber;

int binNumber[256];



// Division Function Bitwise
int division2(int someNumber){
    
    return someNumber >> 1;
}


// Write the from LSB to MSB
    int length = 0;
    

int main() {
    

    
    int a = 11;
    
    
    
    int length = 0;
    
    while (a > 0){
        if(a % 2){
            
            binNumber[length] = 1;
            length++;
        }
        
        else{
            
            binNumber[length] = 0;
            length++;
            
        }
        a = division2(a);
    }
    
    
    
    
    printf("binary length number: %d \n", length+1);
    
    for (int i = 0; i<length+1; i++){
        
        printf("%d",binNumber[i]);
        
        
    }
  
  printf("\nSome Space \n");








    for (int i = length; i>=0; i--){
        
        printf("%d",binNumber[i]);
        
        
    }
  
  printf("\nSome Space \n");
  
  
  
  
  

    return 0;
}