#include <stdio.h>
#include <stdlib.h>

// Global Variables

int N = 240
char text[N]


void countLetters(char *text);
void inputSentence();




int main (){

    char test[] = "one two three four five six seven eight nine ten";

    //inputSentence();
    countLetters(test);





    return 0;
}



void inputSentence(){

        printf("Please input a sentence: \n");
        
        fgets(text,n-1,stdin);
        printf("Input Sentence:\n%s\n",text);

}


void countLetters(char *someText){

    int count = 0;
    int words = 0;


    for (int i=0; someText[i];i++){
        
        if(someText[i] != ' '){
                count++;
               // printf("%d\n",count);
        }

        else { 
            
            if(count > 4){
                for(int b = i-(count); b<i ; b++){
                
                    printf("%c\n", someText[b]);
                    
                    
                }
                printf("\n");
                words++;
            }
        
            count=0;

        }


    }
   
    printf("count of words longer than 5: %d\n", words);  

}



