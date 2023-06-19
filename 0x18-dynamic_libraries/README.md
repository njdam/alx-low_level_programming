# DYBAMIC LIBRARY "SHARED LIBRARY"

***A dynamic library***, also known as **a shared library**, is a collection of precompiled code and resources that can be used by multiple programs at runtime. It provides a way to share common functionality among different software applications without having to include the code in each individual program.

It generate the library file: After compiling the code, you will obtain a dynamic library file. The file extension may vary depending on the operating system, such as `.so` (**Linux**), `.dll` (**Windows**), or `.dylib` (**macOS**).

The `$LD_LIBRARY_PATH` environment variable is used by the system's dynamic linker/loader to specify additional directories where it should look for shared libraries (dynamic libraries) at runtime. When a program is executed, the dynamic linker uses this variable to search for and load any required dynamic libraries that are not located in the default system paths.

Determine the directories where your shared libraries are located. Let's say you have a directory named /path/to/mylibs that contains your custom shared libraries.
```
export LD_LIBRARY_PATH="/path/to/mylibs:$LD_LIBRARY_PATH"
```

Run your program. The dynamic linker will now search for shared libraries in the directories specified in `$LD_LIBRARY_PATH` in addition to the default system paths.

## MY MAN PAGE

1. `nm`: is a command-line tool used to examine the symbols (functions, variables, etc.) defined or referenced in object files or libraries. It is primarily used for inspecting binary files, including static libraries and executables.
```
nm <object/lib filename>
```

`nm` displays a list of symbols along with their addresses and types, such as "`U`" for undefined symbols, "`T`" for text (code) symbols, and "`D`" for data symbols.


2. `ldd`: is a command-line utility used to display the shared library dependencies of an executable. It shows which shared libraries are required by the specified executable and where they are located.
```
ldd <executable file>
```

3. `ldconfig`: is a command used to configure the runtime linker/loader cache. It updates the shared library cache to include newly installed shared libraries or to remove old ones.

***To update the shared library cache:***
`sudo ldconfig`

***To specify additional directories to be included in the library cache (useful for non-standard library locations):***
`sudo ldconfig <directory>`

***To remove a specific library from the cache:***
`sudo ldconfig -n <library>`

***To display the current contents of the library cache:***
`ldconfig -p`

## DYNAMIC LIBRARY CREATION

1. ***PIC***: Compile for “Position Independent Code”

When the object files are generated, we have no idea where in memory they will be inserted in a program that will use them. Many different programs may use the same library, and each load it into a different memory in address.

In most compilers, this is done by specifying `-fPIC` or `-fpic` on the compilation command.

2. Dynamic Library creation unlike  a static library, a shared library is not an archive file. It has a format that is specific to the architecture for which it is being created.

```
gcc command using the flag -c to generate the object files (.o) from the source files (.c) and the -fPIC to make the code position independent. Thus, the following command makes a bunch of .o files from each .c file in the current directory.

`gcc -c fPIC *.c`
```

=> We put together those objects files into one library as follows:
`gcc -shared -o libname.so *.o`

=> To verify you have created Dynamic library with right functions as dynamic symbols is as follows:
`nm -D libname.so`

=> Dynamic library (shared library) is used in two steps:

a. **Compile Time**: here we need to tell the linker to scan the shared library while building the executable program, so it will be convinced that no symbols are missing.
`gcc main.o -L. -lutil -o prog`

b. **Run Time**: when we run the program, we need to tell the system's dynamic loader (the process in charge of automatically loading and linking shared libraries into the running process) where to find our shared library.

