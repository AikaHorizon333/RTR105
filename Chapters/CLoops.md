# C/C++ Loops

They are  use to repeat some parts of code.

DO NOT REPEAT YOURSELF.

Types of Loops:  

* while -> while some state is true, do.
* do...while-> do, then while some state is true, repeat again.
* for -> for or until some state is true.

Important things to think about each type of loop: 

* while : The loop will execute as long as the expression inside is true.

* do...while:  At least do the action once, then revaluate for repetition.

* for (action1, action2; expression; action3, action4):

- The first part is only executed once at the begining.

- Other actions will continue while expression is true.

´´´
    // Lets write some loops shallwe?

        char whileTrigger = 5;

    // while loop

        while (whileTrigger>0){

        printf("Trigger is : %d\n", whileTrigger);

        whileTrigger--;

        }

    //do..while

        char doTrigger = 25;


        do{

        printf("Trigger is: %d\n", doTrigger);

        doTrigger -=5 ;

        }
        while(doTrigger>0);

    // for loop


        for(char forTrigger = 0; forTrigger<=20; forTrigger++){


        printf("Hello, trigger values is: %d\n", forTrigger);


        }

´´´
