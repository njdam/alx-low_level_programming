# C - Makefiles

## What are make and Makefiles?

* [make:] `make` is a build automation tool that automatically builds executable programs and libraries from source code by reading files called `Makefiles`.

* [Makefiles:] A `Makefile` is a special type of file used to define a set of tasks, dependencies, and rules for building and compiling software projects. It specifies how source code files should be transformed into executable files or libraries.


## When, why, and how to use Makefiles:

* [When and why:]() Makefiles are used when managing complex software projects with multiple source files. They automate the build process, ensuring that only the necessary parts of the project are rebuilt when changes occur, saving time and resources.

* [How:]() Makefiles contain rules that describe the relationships between source files, dependencies, and the commands needed to build the project.


## What are rules and how to set and use them:

* [Rules:]() Rules in a Makefile define how to create a target (output file) from a set of dependencies (input files).

* [Setting and using rules:]() A rule typically consists of a target, dependencies, and commands.

For example:
```
target: dependency1 dependency2
	commands
```


## What are explicit and implicit rules:

* [Explicit rules:]() Explicit rules specify how to create a target using specific dependencies and commands.

* [Implicit rules:]() Implicit rules are predefined rules that make uses automatically if an explicit rule is not found. They follow naming conventions and can simplify the Makefile.


## Common/useful rules in Makefiles:

* [`.c` to `.o` rule:]() Compiles `.c` source files into object files (`.o`).

* [`all` rule:]() Builds all targets specified in the Makefile.

* [`clean` rule:]() Removes generated files to clean up the project directory.


## What are variables and how to set and use them:

* [Variables:]() Variables in Makefiles are used to store and retrieve values, making it easy to reuse values across different parts of the Makefile.

* [Setting and using variables:]() Variables are set using the syntax `VARIABLE_NAME = value` or `VARIABLE_NAME := value`. They are used with the syntax `$(VARIABLE_NAME)`.


[Note That:]() In summary, Makefiles are essential for automating the build process of software projects. They help manage dependencies, ensure efficient rebuilding of project parts, and simplify project management. By understanding and utilizing rules, variables, and other Makefile features, you can efficiently compile and manage your software projects.
