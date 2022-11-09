// POINTERS REFERENCE AND FUNCTIONS IN C

#include <stdio.h>
#define LOG(x) printf("\n%d\n",x)

int mult(int a, int b);
int multPOINT(int* a, int* b);
int multREF(int &a, int &b);


int main() {
    // Write C code here
    int a = 5;
    int b = 2;
    int c;
    
    int* pointToA = &a;
    int* pointToB = &b;
    
    c = mult(a,b); // it copies the values
    
    LOG(c);
    
    c = multPOINT(pointToA, pointToB); // it goes to the memory location
    
    LOG(c);
    
    c = multREF(a,b); // It goes to the memory location and then multiplies
    
    LOG(c);
    
    
 

    return 0;
}



int mult(int a, int b){
    return a*b;
}



int multPOINT(int* a, int* b){
    return (*a)*(*b);
}

int multREF(int &a, int &b){
    return a*b;
}
