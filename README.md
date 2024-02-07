# Pipex

## Understanding the subject :

The command ```grep a1 < infile | wc -w > outfile``` performs the following actions:

- ```grep a1 < infile ``` : This part of the command searches for the string "a1" within the contents of infile.
- The ```<``` symbol redirects the contents of infile as input to grep.
- ``` | ```: The pipe operator takes the output of the command on its left (the grep command) and passes it as input to the command on its right (wc).
-  ``` wc -w```: This counts the number of words in the input it receives. The -w flag tells wc to count words rather than characters or lines.
- ```> outfile```: The ```>``` operator redirects the output of the wc command to outfile. If outfile doesn't exist, it will be created. If it does exist, its contents will be overwritten.

In summary, this command reads the file infile, searches for occurrences of the string "a1", counts the number of words in those occurrences, and writes the word count to outfile.


## Documentation

- [Excellent documentation to understand the project and the functions we are allowed to use]:(https://42-cursus.gitbook.io/guide/rank-02/pipex/understand-pipex)
