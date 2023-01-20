# Statistics

Data Analysis is a common practice in all STEM related fields for getting any understanding of data gathered. 

Data analysis is the process of inspecting, cleaning, transforming, and modeling data to extract useful information and insights. It involves the use of various statistical, mathematical, and computational techniques to understand patterns and relationships in the data, and to make predictions or decisions based on that understanding. 

This project will focuse on some basic technics like sorting, getting minimum - maximum values, median, average and mode and how to visualize the gathered with that knowledge.


The data that will be analyzed is the ASCII values of a string input by a user.

## Sorting : Min and Max Values


When inspecting data a common practice is to identify the maximum and minimum values, in order to ease that process one can sort the data. 

For this case the data to sort is a  string

The function desing is the following:

	* Take a String
	* Compare element i of the string with element j of the string
	* If that element i is bigger, Swap places
	* Traverse all the elements




```

void sortString(char str[]) {
    int i, j; // index
    char temp;// temporary container for the swaping

    for (i = 0; i < strlen(str); i++) { 	// element under analysis i 
        for (j = i + 1; j < strlen(str); j++) {	// Element to compare with
            if (str[i] > str[j]) {
                temp = str[i]; 			// save for the swap
                str[i] = str[j];		// Interchange i -> j
                str[j] = temp;			// j -> i
            }
        }
    }

}	


```

After sorting the list, the minimum value will be located on the top of the list, and the maximum value will be located on the last place of the list.


```

	sortString(str);
    
	printf("Minimum Symbol ASCII Value:\t%c\t%d\n", str[0], str[0]); // First Value, index 0
	printf("Maximum Symbol ASCII Value:\t%c\t%d\n", str[len -1], str[len -1]); // Last value, index is the length of the string minus 1.

```


## Average


The average represent a description of how the "center" of the data looks like.


Better defined as the  measure of central tendency that represents the sum of a set of numbers divided by the number of items in the set. It is a commonly used statistical measure to describe the middle value of a dataset

To calculate the average of the string the following function is designed: 

```


	void averageString( char str[]){
    
    		int sum = 0;
		int avg, temp;
    
		for (int i = 0; i < strlen(str); i++) { // Compute the sum of all elements
			temp = (int)str[i];
			sum += temp;
				}
	    
    avg = sum/strlen(str); // Calculate the average by dividing by the string length.  

    printf("Average Symbol ASCII Value:\t%c\t%d\n", (char)avg, avg);
    
}


```


## Median

The Median is the data point in the middle of a ordered data set. It shows how spaced the data is in relation with the average.

The median is a measure of central tendency that represents the middle value of a dataset when it is ordered by magnitude. It is the middle number of a set of numbers, when arranged in ascending or descending order. 

The median can be found after sorting the string: 

```

	int middle = len/2; // Index that directs to the middle of the array
	printf("Median Symbol ASCII Value:\t%c\t%d\n", str[middle], str[middle]);


```

## Mode

The Mode is the most repeated value in the data set. 

The function designed for finding the Mode on the string is the following: 


```

	void modeString( char str[]){
    
		int count[255] = {0}; 			// All indices are initialized to 0, each index represent a ASCII Value
		int len = strlen(str);
		int max = 0;
		char result;
  
		for (int i = 0; i < len; i++) {
			count[str[i]]++; 		// Since The ASCII value of the Char is the index, we only need to add 1 each time the value appears.   
			
			if (max < count[str[i]]) { 	// We keep tracking the max count and which ASCII value leads the count.
			    max = count[str[i]];
			    result = str[i]; 		// This saves the ASCII value of the Char  
			}
		    }
  
		printf("Mode Symbol ASCII Value:\t%c\t%d\n", result, max);
    
	}



```


## Occurrency


When calculating the mode of the array we stored the occurrency of each character in the array, to know each value we only need to traverse troght the entire array and transform the index into the Char values. 


The function created to disply the ocurrency follows almost the same design with a minor difference: 

```

	void ocurrencyString(char str[]){
    
    
		int count[255] = {0};
		int len = strlen(str);

		for (int i = 0; i < len; i++) {
			count[str[i]]++;
		}

		for (int i = 0; i < 255; i++) {				// With this loop we traverse the entire count list
			if (count[i] > 0) {
			printf("'%c' appears %d times.\n", i, count[i]); // the indeces are casted to Char here.
			}
		}

	}


```

## Output of the program




The main funtion of the program is the following :



```

int main() {
    
    char str[100];				// Creation of an Array for 100 char
    printf("Enter a string: ");
    scanf("%[^\n]",str);			// Scan all char util new line.
    printf("You entered: %s\n", str);			
    
    int len = strlen(str);			// Save the String length
    int middle = len/2;				// Get the String medium index

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



```


In practice, the terminal displays the following: 


```

	Enter a string: Manzana Arroz manzana arroz
	You entered: Manzana Arroz manzana arroz
	Minimum Symbol ASCII Value:	 	32
	Maximum Symbol ASCII Value:	z	122
	Average Symbol ASCII Value:	a	97
	Median Symbol ASCII Value:	n	110
	Mode Symbol ASCII Value:	a	7
	Sorted string is:    AMaaaaaaamnnnnoorrrrzzzz
	' ' appears 3 times.
	'A' appears 1 times.
	'M' appears 1 times.
	'a' appears 7 times.
	'm' appears 1 times.
	'n' appears 4 times.
	'o' appears 2 times.
	'r' appears 4 times.
	'z' appears 4 times.



```







## Histogram

By importing the Count list to a external document its possible to generate a histogram image of the data. 

All the information needed to display the data is already in the array.


The implemented function is the following: 


```


	void genHist(char str[]){

	    int count[255] = {0};
	    int len = strlen(str);

	    for (int i = 0; i < len; i++) {
		count[str[i]]++;
	    }

	    FILE *fp;
	    fp = fopen("occurrence_data.txt", "w");

	    for (int i = 0; i < 255; i++) {
		if (count[i] > 0) {				// This will skip empty values
		    fprintf(fp, "%d %d\n", i, count[i]);
		}
	    }

	    fclose(fp);


	}


```




