#include <stdio.h>



int main(){

    int age; 
    int hexNumber;
    char name[80];

    // Getting values from user
    printf("Hello! \n Please, enter your name: \n");
    scanf("%79s", name);

    // Storing values by reference
    printf("Enter your age: \n");
    scanf("%d", &age);

    // Output values from variables. 
    printf("Your name is %s, and you are %d years old. \n", name, age);

    // Reading integers.
    printf("Enter a Hexadecimal number: \n");
    scanf("%x", &hexNumber);
    printf("You have entered:%#x (%d) \n Thank you! \n", hexNumber, hexNumber);

    return 0;
}