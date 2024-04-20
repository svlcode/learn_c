# How to create a DLL

To compile and link multiple source files (file1.c, file2.c, file3.c, file4.c) located in different directories (test_lib_files and test_lib_files/dir1) into a shared library (testlib.dll) on Windows using gcc, you'll need to follow these steps. Make sure you have gcc installed and properly set up on your Windows system, for example, through MinGW or MSYS2.

## Step 1: Compile Source Files into Position-Independent Object Files

Compile each source file with -fPIC to generate position-independent object files (file1.o, file2.o, file3.o, file4.o).

```bash
gcc -c -fPIC test_lib_files/dir1/file1.c -o file1.o
gcc -c -fPIC test_lib_files/dir1/file2.c -o file2.o
gcc -c -fPIC test_lib_files/file3.c -o file3.o
gcc -c -fPIC test_lib_files/file4.c -o file4.o
```

## Step 2: Create a Shared Library (testlib.dll) from Position-Independent Object Files

```bash
gcc -shared -o testlib.dll file1.o file2.o file3.o file4.o
```
