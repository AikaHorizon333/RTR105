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

// Getting Char To Int
int charToInt(char someChar){
    int someInt = (int)(someChar);
    return someInt;
}

int masking(int charNumber){
    // Filters out sr. byte.
    int mask = 0x0f;
    return charNumber&mask;
}



// Division Function Bitwise
int division2(int someNumber){
    
    return someNumber >> 1;
}


// Write the from LSB to MSB
    int length;
    

int main() {
    
    // ASK FOR CHARACTER

    printf("Hello!, please input a number (0-9) you want to conver to binary\n");

    scanf(" %c",&decChar);

    decNumber = charToInt(decChar);
    
    // MASKING
    
    //int a = 11;
    int a = masking(decNumber);
    
    // GET BINARY
    
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
    
    
    /*

    // this prints the number by LSB order
    
    printf("binary length number: %d \n", length+1);
    
    for (int i = 0; i<length+1; i++){
        
        printf("%d",binNumber[i]);
        
        
    }
  */

  printf("Your number is:\n");

    for (int i = length; i>=0; i--){
        
        printf("%d",binNumber[i]);
        
        
    }
  
  printf("\nC Yah!\n");
  

    return 0;
}