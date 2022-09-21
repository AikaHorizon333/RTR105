# Basic Terminal Commands  

1. **Who am I ?**  

    Displays the current user.  

    `whoami` 

2. **Who ?** 

    Displays *who* is in the system and how they are connected.

    - tty: They are locally connected.    
    - pts: They are externally connected.  

    `who`

3. **Print Working Directory, Where Am I ?**

    Displays the current directory. 

    `pwd`

4. **Walking to other directories**

    - `cd <somePath>` This command moves you to the specified directory.   
    - `cd ..` You move to the parent directory.  
    - `cd`  It moves you to the *Home* directory.  

5. **What is inside?** 

    - `ls` It shows you the visible files available on the current directory.  
    - `ls -a` It shows *all* the files, including hidden files on the directory.   
    - `ls -l` List a more detailed report of the available files and folder on the current directory.  
    - `ls -la` List a detailed report of *all* the files and folders. 
    - `ls -lt` Sort the list by time.  

    The report includes:  

    - Folder or File
    - Permissions for the owner, for the group and for external users -> r: read, w: write, x: execute
    - Number of subdirectories inside the directory. 
    - Owner
    - Group
    - Size in bytes
    - Date
    - Name

6.  **Moving Files**

    We can move files form the current directory to another directory.

    `mv <filename> <destination>`

7. **Copying Files**  

    We can copy files from the current directory to another directory.  

    `cp <filename> <destination>`

8. **Creating New Folders.**  

    We can create new folders in the current directory.  

    `mkdir <name>`

9. **Creating Files.**  

    We can create files in the current directory.  

    `touch <filename>`

    Also, `touch` allow us to modify the timestamp of a file: 
    - `touch -a` : changes the access time.
    - `touch --date=<string>`: changes a timestamp using a date string.  
    
    The timestamp follows the next pattern: 
    
    ```
        [[CC]YY]MMDDhhmm.[ss]

    ```

10. **Remove Files and Folders.**  

Removing files and folders should be handle with care. 
[More information](https://www.hostinger.com/tutorials/how-to-remove-files-and-folders-using-linux-command-line/)

- For removing **empty directories** on the current directory `rmdir <dir name>`
- For removing files on the current directory `rm <filename>`


## More Commands  

Additional shell commands to experiment with.  

11. **Read File.**  

    We can read what is inside of a file from the terminal. 

    `cat <file name>`  

12. **Looking commands**  

    Locate command excecutable  

    `where <bash command>`

13. **Print to the terminal**  

    Print messages to the terminal. Usefull for scripting.

    `echo <message>`

14. **Built in text editor**

    Open a file in the text editor

    `nano <file name>`


15. **Change Directory Permisions**

    We can change a file or folder permissions for the owner:  
    * r: read.    
    * w: write.    
    * x: executable.    

    - `chmod +rwx <file name>` Adds permissions.
    - `chmod -rwx <file name>` Removes permissions.  
    - `chmod +x <file name >` Allows executable permissions.  
    - `chmod -wx <file name>` Removes write and executable permissions.  

