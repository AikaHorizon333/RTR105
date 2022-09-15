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