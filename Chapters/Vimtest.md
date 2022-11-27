HELLO !!!

This will be a guide to get started with VIM. 

First, what is Vim ? 

Vim is an editor in built in the terminal more powerfull than nano and its also available in several Linux distro.

The main point of Vim is to type code F a s t !. 


1. Getting started - Vim modes. 


Vim has  input modes:

	1. Command (default)
	2. Insert (i)
	3. Visual (v)
	4. Visual Block (shift + v)


Command mode - This mode allows you to give Vim instructions of what to do, It is a sort of neutral mode.
One can not write code into this mode. 

But... One can make configurations, circle around the code and perform small edits. More about it later. 

Insert Mode  - This mode allow us to type regular code as in any editor.

Visual Mode  - This mode will allow us to select sections of the code for copy, cut and delete purposes. 

Visual Block - This mode allow us to format code in a very fast way. 



2. Motion Commands - Navigating a File

Vim encourage using the keyboard to traverse a file without the need of ususing a mouse. 

For moving commands we have:

	* j - down
	* k - up
	* h - left
	* l - right

And we can combine those commands with the number of repetitions we want vim to to. 

	Ex. Go down 7 lines: 7j. 

For moving through a line of code there are more usefull commands. 

	* w - Moves to the next word. 
	* B - Moves to the previous word.
	* b - Moves to the begining of a word. 
	* e - Moves to the end of a word.  
	* 0 - Moves to the beginning of a line.
	* $ - Moves to the end of a line.


How to jump through a specific line of code ? 

	:[The number of line that you need to get to]

	Ex. :123 --> jumps to line 123. 

Another usefull motion commands. 

	* gg - jumps to the first line of code.
	* G  - jumps to the last line of code.


3. Editing Text. 






