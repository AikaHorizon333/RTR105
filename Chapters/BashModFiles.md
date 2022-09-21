# Creating and Editing Files in Terminal    


We can create files and the content within using terminal in-built options.    

## Creating Files  

* Option 1 - We can create a file by using writing:   

```
    touch <file_name>  

```

This also works for creating multiple files.    

```
    touch <file_name_1> <file_name_2>..etc  
    
    # This commad will create files from a-h letters.  
    
    touch someName{a..h}

```

* Option 2 - echoing a line into it:   

```
    # This will create a file with the echoed text if the file does not exist.  
    echo "print("hello,world!")" > hello.py  

```

* Option 3 - Using the **cat**, you will need to *exit manually* from the command:  

```
    cat > new_file
```


## Overwriting Files  

* Option 1 - using a text editor to edit the content:   

```
    nano <filename>
```

* Option 2 - Echoing a new line into it. This will overwrite the entire file for the echoed line.  

```
    echo "this is file 1" > file1  
```
* Option 3 - Appending a new line to the existing file.    

```
    echo "this is line 2 in file 1" >> file1  
```

## Overwriting Files - Using Cat!.  

The `cat`command has a *ton* of functions to modify the content of a file besides its main utility to read files.    

1. **Copy** the contents of a file into another file. 

``` 
    cat file_origin > file_desitnation
```

2. **Append** the content of one file to another file  

``` 
    cat file_origin >> file_desitnation
```

3. **Merge** the contents of multiple files in another file.  

``` 
    cat file_1 file_2 ... file_n >> merged_file
```

4. Append new text to the file. You need to exit manually from the cat command.

``` 
    cat >> file
    # Write some text into the file here.
```
5. **Pass** a multi-line string to a file. 

```
# This will overwrite the entire file. Notice the >. 

    cat <<EOF > file
    line 1
    line 2
    ...
    line n 
    EOF

# This will append the entire file. Notice the >>. 

    cat <<EOF >> file
    line 1
    line 2
    ...
    line n 
    EOF



```

