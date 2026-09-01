## CSCE 30503: Week 3 Assignment


Create a library named **mylib.c** and a header file **mylib.h** that contains the following functions.


**int cstrlen(char \*str)**

Find the length of the null terminated string, str and returns the length. The **cstrlen()** function calculates the length of the string pointed to by str, excluding the terminating null byte ('\0'). The function returns the number of bytes in the string pointed to by str.

**char \*cstrcpy(char \*dest, char \*src)**

Copy a string from src to dest, returning a pointer to the end of the resulting string at dest. The **cstrcpy()** function copies the string pointed to by src, including the terminating null byte ('\0'), to the buffer pointed to by dest.  The strings may not overlap, and the destination string dest must be large enough to receive the copy.  Beware of buffer overruns!

**char \*cstrcat(char \*dest, char \*src)**

Append the string src to the string dest, returning a pointer dest.  The **cstrcat()** function appends the src string to the dest string, overwriting the terminating null byte ('\0') at the end of dest, and then adds a terminating null byte. The strings may not overlap, and the dest string must have enough space for the result.  If dest is not large enough, program behavior is unpredictable; buffer overruns are a favorite avenue for attacking secure programs.


**char \*cstrchr(char \*str, int c)**
              
The **cstrchr()** function returns a pointer to the first occurrence of the character c in the string s. The **cstrchr()** function returns a pointer to the matched character or NULL if the character is not found. The terminating null byte is considered part of the string, so that if c is specified as '\0', these functions return a pointer to the terminator.


**int cstrcmp(char \*s1, char \*s2)**

The **cstrcmp()**  function  compares  the two strings s1 and s2. It returns an integer less than, equal to, or greater than zero if s1 is found, respectively, to be less than, to match, or be greater than s2. The  strcmp() function returns an integer less than, equal to, or greater than zero if s1 (or the first n bytes thereof) is found, respectively, to be less than, to match, or be greater than s2.


### You cannot us ARRAY Notation[] (Except to define an array). You cannot include the <string.h> C Standard Library or use any of the functions in this library in your code


Compile your library:
```c
gcc -Wall -g -c mylib.c
'''
This will create a **mylib.o** object file. The -c stops the GCC toolchain after the Assembler before the Linker.
```c
gcc -Wall -g libtest.c mylib.o -o libtest
```
This will link your library file in your executable binary.  -Wall and -g are for generating warnings and source code for the GDB Debugger.

