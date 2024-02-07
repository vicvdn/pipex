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

- [Excellent documentation to understand the project and the functions we are allowed to use](https://42-cursus.gitbook.io/guide/rank-02/pipex/understand-pipex)

**Functions allowd and explanations**:

- Perror()

The ```perror()``` function in C is used to display a descriptive error message to the ```standard error (stderr)```. It takes a single argument, which is a string that acts as a prefix to the error message. If the string is not NULL, perror first prints the string followed by a colon and a space. After this, it prints an implementation-defined error message that corresponds to the current value of the errno variable, which is typically set by system calls and some library functions to indicate what error occurred.

In the provided code snippet, errno is set by the fopen function when it fails to open the file "nonexistent.txt" for reading. The fopen function attempts to open the file and returns a FILE* pointer if successful. However, if it cannot open the file—for instance, because the file does not exist or due to insufficient permissions—it returns NULL and sets errno to indicate the error that occurred 4.

Here's the relevant part of the code:
```c
#include <stdio.h>
#include <stdlib.h>

int    main(void)
{
FILE *file;

file = fopen("nonexistent.txt", "r");
if (file == NULL)
{
    perror("Error opening file");
    // Handle error, perhaps by exiting the program
    exit(EXIT_FAILURE);
}
```

- Access()

```access()``` checks whether the program can access the ```file pathname```.
```c
#include <unistd.h>
#include <stdio.h>

int main()
{
    if (access("readfile", R_OK) == 0)
        printf("readfile is accessible in reading mode\n");
    if (access("writefile", W_OK) == 0)
        printf("writefile is accessible in writing mode\n");
    if (access("executefile", X_OK) == 0)
        printf("executefile is accessible in execution mode\n");
    if (access("rwfile", R_OK|W_OK) == 0)
        printf("rwfile is accessible in writing and reading mode\n");
}
```

## New notions:

[Input/Output Introduction](https://www.youtube.com/watch?v=Vax97MIL_uI&list=RDCMUCX2Dop_X6MtbcmEVkbjMpSA&start_radio=1&rv=Vax97MIL_uI&t=1)

- 0 is the stdinput
- 1 is the stdoutput
- 2 is the stderr

The reason why we have a different fd for output and error is that we are probably going to want to output things into a file other than the terminal whereas generally we want to output errors in the terminal. 

