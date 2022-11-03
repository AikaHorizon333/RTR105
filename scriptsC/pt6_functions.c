/*
Write code, which will use four different user defined functions
 – without arguments and without return, 
 - with arguments and without return, 
 - without arguments and with return, with arguments and with return. 
 Upload solution code into Your RTR105 repository, insert here address of solution code.

*/
#include <stdio.h>

/* Global Variables */ 
int myVar1;
int myVar2;
int myVar3;



//FUNCTION WITH PARAMETERS AND RETURN

// Addition to a current Memory Block
    int Multiply(int *a, int *b){
        return *a * *b;
    }


//FUCNTION WITH PARAMETERS AND NO RETURN.

// Swap Variables Function
    void swapVariables(int *a, int *b){
        int temp = *a;
        *a = *b;
        *b = temp;
    }
    
//FUCNTION WITH No PARAMETERS AND RETURN.

int tripleABC(){
    return myVar1+myVar2+myVar3;
}
    
// FUNCTIONS NO PARAMETERS, NO RETURN,
    
    void result(){
         printf("\nValue of myVar3: %d\n",myVar3);
    }
    
    void resetGlobalVar(){
        myVar1 = 0;
        myVar2 = 0;
    }
    
    void myVarStatus(){
        
        printf("\nValue of myVar1: %d\n",myVar1);
        printf("\nValue of myVar2: %d\n",myVar2);
        
    }



    

int main() {
    
    
    // Lets do some Magic with funcitons and pointers. 
    // Poninters store the memory adress of the variables.
    // We can access this information by de-referencing the pointer. 
    // this is: *p. 
    
    // In order for a pointer to work we need to pass it the adress of the variable, this is done by referencing pt = &var
    
    // First Initialize the Global Variables. 
    myVar1 = 1;
    myVar2 = 2;
    
    myVarStatus();
    
    // This are Local Pointers.
    int* pt1 = &myVar1;
    int* pt2 = &myVar2;
    int* pt3 = &myVar3;
    
    // We are going to add the Variables with out touching them. 
    
    // Lets Add.
    
    *pt3 = *pt1 + *pt2; // Here, we are setting the value of myVar3 
                        // We are calling the memory block that stores myVar3. 
                        
    result(); // This function logs the value of myVar3.
    
    
    // Let's Multiply using a fucntion. 
    
    *pt3 = Multiply(pt1,pt2);
    
    result();
    
    // Lets add the three variables:
    
    *pt3 = tripleABC();
    result();
    
    // Lets try a more complex function.
   swapVariables(pt1,pt2);
   myVarStatus();
   
   // Lets reset Everything to Zero.
   resetGlobalVar();
   myVarStatus();
    

    return 0;
}