# Bash Scripting Guide   

Scripts are here to make our life easy and avoid making us work twice.   

## Setting Up a Script  

We can make bash scripts. This will allow us to excecute commands from the terminal.  

1. Create a *.sh* file:  

    `touch greeting.sh`  

2. Open the document in a text editor:  

    `nano greeting.sh`

3. The first line for a bash script is: 

    `#!/bin/bash`

4. Write some shell commans in it,  for example: 

    `echo "Hello World!"`

5. Save the file and add executable permissions to the file: 

    `chmod +x greeting.sh`

6. Execute the file:  

    `./greeting.sh`

We should get "Hello World!" from the terminal window. 

## Getting Variables.  

### Defining Variables.    

Now, we are going to make things a little more interesting...  

Assume we are going to say Have a Nice day to some one else, but we dont know that person.  

Our script looks like this:  

    ```
        #!/bin/bash

        echo "Hello World!"

    ```  

So we introduce the concept of a variable. A variable is box in the code that we can allow us to **store** a value that can be changed later or that will be used on more advanced stages of our script.     

Lets say Hello to Maggi.  

    ```
        #!/bin/bash

        name = "Maggi"

        echo "Hello World!"

        echo "Hello $name!"

    ```

We can deffine a variable with a *name* and then add a *value* to it:  
    
    ```
        name="Maggi"
    ```

And we can call that variable appending a `$` before its name:   

    ````
        echo "Hello $name!"
    
    ```   

### Asking the user for Variables.    

Now... What if we ask to the user their name?  

    ```
        echo "Who are you?"
        read you
        echo "Nice to meet you, $you!"

    ```
With *read* we can expect a response from the user and use it into the code.  

### Special Variables - Arguments.  

Another way to get information from the user is by using *position parameters* aka. Arguments.  

We can rewrite the code as:  

    ```
        #!/bin/bash

        name=$1

        echo "Hello World!"

        echo "Hello $name!"

    ```

Here in `name=$1` we are specifying the argument we would like to use when initializing the script.  

    ```
        # We get the following structure: <executable><argument1>...<argument n>

        ./greeting.sh Maggi

    ```

### Special Variables - Getting output from commands.  

Another way to gather information for the script is from the output of a shell command.  

In order to do that we need to write `variable=$(command)`.  

Let's get the date.  

```
    date=$(date)

    echo "Today is $date"

```

With some modifications the final script looks like this.  


```
    #!/bin/bash

    name=$1
    compliment=$2
    date=$(date)

    echo "Good Morning $name !!!"

    sleep 1

    echo "You have the best $compliment I've ever seen, $name "

    sleep 1 

    echo "Today is $date"

    sleep 1

    echo "Have a nice day!!!"

    sleep 1

    echo "Meow! Meow! MEOW!!!"

    sleep 2

    echo "Who is meowing?!"

    read Who

    sleep 1

    echo "$Who is meowing!"


```

## Adding directories to *$PATH*.  

### Non-permanent way:  

We can excecute a script in the terminal by adding the directory of the excecutable file to the $PATH.  

The command `echo $PATH` will show all the directories that the interpreter will look for the excecultable file.    


We can add a directory to the current process by typing:    

```
    PATH=$PATH:/ <path to the excecutable>  

```

The command to excecute the file will be the *name* of the file.  


To export the modifyied variable to other child processes we can write:

```
    export PATH=$PATH:/<path to the excecutable>

```

The `export` command allows to share variables with child processes.  

However, this two options only work while the the shell session lasts.  


### Permanent way:  

To add the path in a permanent way we have to define the $PATH variable in the configuration files.  

The path can be defined in a global scope by changing the shell files in `/etc/enviroment`.  

For all users we can set the path in the `$PATH`variable in the shell interpreter file.  

    - If we use bash shell, the file we are looking is `~/.bashrc` (Linux).  
    - If we use zsh, the file is `~/.zshrc` (macOS).  

```
    # We add this line at the end of the shell file:  

    export PATH="\$PATH:<the path that we want to add>"  

```

To load the new path we run: `source ~/.bash_interpreter_file`  

The `source` command will let us read through a file and excecute the content of it (usually commands).  




