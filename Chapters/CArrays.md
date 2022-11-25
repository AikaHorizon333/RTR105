# Arrays in C  

Arrays are an important and versatile programming construct, enabling you to build and work with a large amount of related data (data of the same type) in a structured way using one name to reference the entire set of data.  

They offer a simple way of grouping like variables for easy access.  

Arrays in C share a few common attribute:  

* Variables in an array share the same name.  
* Variables in an array share the same data type.  
* Individual variables in an array are called elements.  
* Elements in an array are accessed with the index number.  

## Memory

Arrays are a grouping of continguos memory segments.

Elements in an array begin with index number zero!  

## One - Dimensional Arrays  

There is no rule for when to use an array, some problems are better suited for an array-based solution

One dimensional arrays can be created as:

```

    int iArray[10]; // Creates array with 10 elements of integer datatype.

    char cName[10]; // Creates an array with 10 char elements, last item is NULL character.
    

```

It is important to declare the number of memory blocks that you are going to need since, arrays are not dinamically allocated.

Other way to initialize an array may be:  

```
    int iArray[5] = {0,1,2,3,4}; // Array of 5 elements initialized with some values.

    // Trick: it's possible to initialize an array with a single value.
    // Assigning 0 in an array declaration will automatically assign all elements to 0.

    int iArray[5] = {0};

```

Arrays can also be initialized with for loops.  

```
    int iArray[5];
    
    for(int i = 0; x<5; i++){

        iArray[x] = 0

    }

```
