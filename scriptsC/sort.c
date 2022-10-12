/*

Write code, which will ask user to enter three characters (char data type) and will ask order of sequence they would like to see, ascending or descending.

By using conditional statement - if, sort entered letters in sequence, user would like to see and output sorted sequence.

*/

#include <stdio.h>



char char1;
char char2;
char char3;

char characters[3];

// Set the characters

void setCharacters(char *t){

    printf("Type Character: \n");
    scanf(" %c", t);
}

// Compare Characters

char whoIsLarger(char a, char b){

    if (a>b){ return a; }
    else { return b ;}
}


// Ask for Sorting order

char isAscending;



int main(){

    printf("Type some characters: \n");

    setCharacters(&char1);
    setCharacters(&char2);
    setCharacters(&char3);


    printf("Characters: %c, %c, %c\n", char1, char2, char3);

    printf("Which do you prefer: Ascending (y) or Descending (n)\n");
    scanf(" %c", &isAscending);
    


    if(isAscending =='y'){

        // Sort Ascending. 
        printf("Sort Ascending\n");
     
    }

    else if(isAscending =='n'){

        //Sort Descending. 
        printf("Sort Descending\n");
        
    }

    else {

        // No correct input
        printf("Sorry, I cannot help you :(\n");
        

    }
    

    return 0;
}