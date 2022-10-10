# C Data Input and Output.  

C handles input and output data from streams using a library known as `stdio.h`

## Input Data. 

For taking data from the `stdin()` we use the `scanf()` function. It reads the input data and stores them according to the parameter format into the locations pointed by the additional arguments.   

This means that the variables containing the read data should've been created in advance.   

Usually the most common method for input data through `stdin()` is from the keyboard.

```
// For C : 

#include <stdio.h>

int main(){

    double someNumber;

    scanf("%7.3f", &someNumber);

    return 0;
}

```

```
// For C++ : 

#include <cstdio.h>

int main(){

    double someNumber;

    scanf("%5.3f", &someNumber);

    return 0;
}

```


## Output Data.  

For promting messages to the user is possible to use the `printf()` function.

*This is also possible in C++ with the C Library*

```
// For C: 

#include <stdio.h>


int main(){
    
    // Print function
    printf(const char * format, ...);

    return 0;
}
```


```
// For C++ 

#include <cstdio.h>

int main(){

//
printf(const char * format, ...);

return 0;

}


```



This function takes a *formatted string* and substitutes the specifiers for the values variables in the arguments (*the ... part*). Then it passes the generated text to stdout.


## Specifier Structure.  

The specifiers can be reduced to the following structure: 

```
%[flags][width][.precission][length]specifier

```
The most important part is the specifier character at the end since it defines how it will be interpreted. It is important that the specifiers match the type of data on the arguments.

### Specifiers.  

For integers we have:  

1. `d` : Signed Decimal integer.  
2. `u` : Unsigned decimal integer.  
3. `o` : Unsigned octal.  
4. `x` : Unsigned hexadecimal.  


For floats we have:  

1. `f` : Decimal floating point.  
2. `E` : Scientific notation.  
3. `a` : Hexadecimal floating point.  

Other usefull specifiers:  

1. `c` : character.  
2. `s` : string.  
3. `p` : pointer.   

### Flags 

Flags allow us to show more informationa about our variables:   
 
1. `+` : Displays the sign of the variable.  
2. `#` : Shows oct or hex form of the variable.  
3. `,` : Separates thousands with commas.  

### Width

`(width)` : The minimum number of characters to be printed.  

### Precision

`(.precision)` : For floats is the number of digits to be printed after the decimal point.  



 

