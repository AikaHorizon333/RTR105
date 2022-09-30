# Making GitHub Commits

How to download a repository:  

`git clone REPOSITORY URL`

How to make changes:  

```
    git init ---> (Re)Initialize the git repository
    git status
    git add .    ---> Take everything that we have done at this level
    git status
    git commit -m "Test for RTR105 lecture" ---> This is the block of changes
    git status
    git push origin main  ---> Make the changes from where is taking the changes / to where is making the changes.

```

Who is making the changes:  

```
git config --global user.name USER NAME  
git config --global user.email USER EMAIL   
```

You can check the status of the repo by using:  

`git status`  

## Ignoring Files  

Sometimes we dont wanto upload certine type of files to the git network. Compilation objects, keys, etc. 
For keep the repository clean we can write a`.gitignore` file. This way we can specify to **git** which files to ignore. 

We can use *filenames* or *wildcards* to list the files.    

Example:  

```
#Ignore all pdf's in the repo.
*.pdf

#Ignore a File. 
.DS_Store


```
