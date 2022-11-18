# C/C++ Variables.  

## Variables.  


Variables are the way programms keep track of information and they are constructed arround three fundamental properties: 

1. Where is the information stored?
2. What value is kept there?
3. What kind of information is stored?

In scence a variable has **Location**, **Value** and **Type**.  


## Declaration and Initialization a Variable.

For allocate a space in memory for store and name a value we use a declaration, for assigning it a value we *Initialize* the variable. 

It is important to known that the initialization and the declaration can be done at the same time, But if the variable is not initialized it may have a prestored value.   

´´´
    
    int meaningOfLife; // Variable declaration.

    meaningOfLife = 42; // Variable initializarion.

    int someNumber = 0; // Variable declared and initialized.

    int otherNumber {81}; // Another way to declare a variable

´´´


## Integers.  

Integers are numbers with no fractional part, ex. 2, -4, 1042, and 0.  

There are different types of integers and they sould be picked according to the program particular requirements.  

The main difference between integers type is the *width* or the ammount of memory used to store the value.  


### Types of Integers:  

**short**: At least 16 bits wide.
**int**: At least as big as short.  
**long**: At least 32 bits wide.  
**long long**: At least 64 bits wide.  

**unsigned** : determines if the integer would be strictly positive. Hence a bit is used store the negative sing, unsigned interger have the range moved.  

### Choosing Integer type:  

Generally **int** is set to the natural size, a.k.a the type the computer system handles most efficiently. 

So, reasons for not choosing **int**:   

* If a variable represents something that is never negative: unsinged type.  
* If a variable might represent something greater than 16-bit: long type.  
* If your need to save memory: short (for some systems int and short have different ammounts of memory)
* If you only need a byte: char.  

### Integer Literals:   

The Literal or *Constant* is the one written explicitly as 1, 0, -15, 42. And it can be expressed in three different bases: Dec, Oct, Hex. 

```
// Declaration of various types of literals:

int someDec = 10;

int someHex = 0xA;

int someOct = 011;

```
## Float

Floating-Point numbers are very large and very small positive and negative numbers with decimals to indicate a differente degrees of accuracy, depending on the needs of the programer.  

the keyword to initialize a float is **float**.   

Floats can also be **unsigned**.  

```
    float a = 4.5;
    float b = -6.77;
    unsigned float c = 5.78;

```

## Characters

Character data types are representations of integer values known as character codes.  

Characters represent letters, numbers, special characters or even blank space, keyboard keys.  
There are a total of 128 characters codes that make up the most commonly used characters of a keyboard.  

The character codes are most notably organized through ASCII character set.   

For **char** the range goes from -127 to 127. **unsigned char** goes from 0 to 255.  


```
char firstInitial = 'A';
chat secondInitial = 68;

```






