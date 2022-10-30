/*

Loops.

They are  use to repeat some parts of code.

DO NOT REPEAT YOURSELF.

while -> while some state is true.
do...while-> whilde some state is true.
for -> for or until some state is true.

while loop will execute as long as the expression is true.

do...while -> at least do the action once, then think about repeat it.

for(action1, action2; expression; action3, action4)-> The first part is only
executed the first time, other actions will continue while expression is true.

*/


#include<stdio.h>

int main() {

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


	return 0;
}
