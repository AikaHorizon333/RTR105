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

// Compare Characters -- NOT IMPLEMENTED

/*char whoIsLarger(char a, char b){

    if (a>b){ return a; }
    else { return b;}
}*/ 


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

        // Ascending Order
  
        if (char1>char2) {
        
          if(char1>char3){
              characters[2] = char1;

              if(char2>char3){
                  characters[1]=char2;
                  characters[0]=char3;
              }
              else{
                  characters[1]=char3;
                  characters[0]=char2;
              }
          }

          else{
              characters[2]=char3;
              characters[1]=char1;
              characters[0]=char2;
          }
       
       
        }

        else{
           if(char2>char3){
                characters[2] = char2;

                if(char1>char3){
                    characters[1]=char1;
                    characters[0]=char3;
                }
                else{
                    characters[1]=char3;
                    characters[0]=char1;
                }
            }

            else{
                characters[2]=char3;
                characters[1]=char2;
                characters[0]=char1;
            }

        }
  
  
    for(int i = 0; i<3;i++){printf("%c\n",characters[i]);} 
  


    }

    else if(isAscending =='n'){

        //Sort Descending. 
        printf("Sort Descending\n");

        // Descending order
   
        if (char1>char2) {
            
            if(char1>char3){
                characters[0] = char1;
                
                if(char2>char3){
                    characters[1]=char2;
                    characters[2]=char3;
                }
                else{
                    characters[1]=char3;
                    characters[2]=char2;
                }
            }
            
            else{
                characters[0]=char3;
                characters[1]=char1;
                characters[2]=char2;
            }
            
            
        }
        else{
           if(char2>char3){
                characters[0] = char2;
                
                if(char1>char3){
                    characters[1]=char1;
                    characters[2]=char3;
                }
                else{
                    characters[1]=char3;
                    characters[2]=char1;
                }
            }
            
            else{
                characters[0]=char3;
                characters[1]=char2;
                characters[2]=char1;
            }
            
        }
   
        for(int i = 0; i<3;i++){printf("%c\n",characters[i]);}

    }

    else {

        // No correct input
        printf("Sorry, I cannot help you :(\n");
        

    }
    

    return 0;
}