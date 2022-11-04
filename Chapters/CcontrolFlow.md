#  C/C++ Control Flow

Control flow in programming is important to determine the actions to be performed by the program.  

This way we can make changes or excecute acction when certain conditions are met.  

The expresion will evaluate **boolean expresions**.

## IF

This statement will evaluate a expression, if the condition is true, the code between the statement will executed.  

If the condition is *false* it can excecute other version of the code. This statement is optional.

```
    // if statement

    if(someCondition){

        // Code to be excecuted.

    }

    // else statement
    else {

        // Optional code to be executed.  
    }

```

Additionally, If there are more conditions to be met or may possible be forfilled. they can be added with `else if ()`.  

```
    // if statement

    if(someCondition){

        // Code to be excecuted.

    }

    else if (anotherCondition){

        // More code to be possibly executed.  

    }

    // else statement
    else {

        // Optional code to be executed.  
    }

```

## Switch

Switches are used when the options for a variable can be counted instead of generalized possibilities.  

The Switch will take a variables and if that variables equal to one of the states, the code inside will be excecuted.

This control structure allows us to branch the code.  

```
    // Switch Statement

    int controlVariable = 1;

    switch(controlVariable){

        case 1:
            // Code to be executed.  
            break;
        case 2:
            // Code to be executed. 
            break;
        default:
            // Code to be excecuted if no cases.
            break;
    }

```

## Ternary Operator  

One way to avoid lage blocks of code and make the execution a little bit faster is by using the Ternary Operator:

```
    // Anatomy of the Ternary Operator

    int someVariable = condition ? trueAction : falseAction ;

```

The ternary operator allows us to write a if... else statemets in a single line of code. 

If the condition is met,  the code on the left will be returned. Otherwise, the code of the right will be returned. 

```

    // Ternary operator: 

    int initialSpeed = 8;
    int speedBox;
    
    
    speedBox = initialSpeed > 7 ? 5 : 7;
    
    printf("The Speed is: %d", speedBox); 
    // The Speed is: 5

```
