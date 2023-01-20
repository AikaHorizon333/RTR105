#include <stdio.h>
#include <string.h>


/*

	Statistics v1.0

- Ask for String
- Sort the String
- Min ASCII Char
- Max ASCII Char
- Average ASCII Char
- Median ASCII Char
- Mode ASCII Char
- Ocurrance of Char


*/

void sortString(char str[]) {
    int i, j;
    char temp;

    for (i = 0; i < strlen(str); i++) {
        for (j = i + 1; j < strlen(str); j++) {
            if (str[i] > str[j]) {
                temp = str[i];
                str[i] = str[j];
                str[j] = temp;
            }
        }
    }

}


void averageString( char str[]){
    
    int sum = 0;
    int avg, temp;
    
    for (int i = 0; i < strlen(str); i++) {
        temp = (int)str[i];
        sum += temp;
    }
    
    avg = sum/strlen(str);
    //printf("Sum Symbol ASCII Value:\t%c\t%d\n", (char)sum,sum);
    printf("Average Symbol ASCII Value:\t%c\t%d\n", (char)avg, avg);
    
}

void modeString( char str[]){
    
    int count[255] = {0}; // ASCII indices
    int len = strlen(str);
    int max = 0;
    char result;
  
    for (int i = 0; i < len; i++) {
        count[str[i]]++;
        if (max < count[str[i]]) {
            max = count[str[i]];
            result = str[i];
        }
    }
  
    printf("Mode Symbol ASCII Value:\t%c\t%d\n", result, max);
  
    
}

void ocurrencyString(char str[]){
    
    
    int count[255] = {0};
    int len = strlen(str);

    for (int i = 0; i < len; i++) {
        count[str[i]]++;
    }

    for (int i = 0; i < 255; i++) {
        if (count[i] > 0) {
            printf("'%c' appears %d times.\n", i, count[i]);
        }
    }

}


int main() {
    
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);
    printf("You entered: %s\n", str);
    
    int len = strlen(str);
    int middle = len/2;

    sortString(str);
    
    printf("Minimum Symbol ASCII Value:\t%c\t%d\n", str[0], str[0]);
    printf("Maximum Symbol ASCII Value:\t%c\t%d\n", str[len -1], str[len -1]);
    
    averageString(str);
    
    printf("Median Symbol ASCII Value:\t%c\t%d\n", str[middle], str[middle]);
    
    modeString(str);
    
    printf("Sorted string is: %s\n", str);
    
    ocurrencyString(str);
    
    
    
    
    
    return 0;
}
