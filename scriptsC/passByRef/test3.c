//POINTERS REFERENCES AND FUNCTIONS IN C PT 2

#include <stdio.h>
#define LOG(x) printf("\n%d\n",x)

int multByValue(int a, int b);
int multByReference(int* a, int* b);



int main() {
    // Write C code here
    int a = 5;
    int b = 2;
    int c;
    
    int* pointToA = &a;
    int* pointToB = &b;
    
    c = multByValue(a,b); // it copies the values
    
    LOG(c);
    
    c = multByReference(pointToA, pointToB); // it goes to the memory location
    
    LOG(c);
    
    c = multByReference(&a,&b); // Since we are passing the memory location.                       // 
    
    LOG(c);


    return 0;
}



int multByValue(int a, int b){
    return a*b;
}



int multByReference(int* a, int* b){
    return (*a)*(*b);
}


