# Storage classes

Storage classes define three things for a particular variable:

1. Scope
2. Life time
3. Initial value

Scope defines the block from which the variable is accessible.

Life time is how long the variable remain allocated in primary memory.

Initial value is the value the variable is assigned immediately after allocation.

## Auto

- auto is optional and implicit
- scope is local to the block where it is declared
- initial value is undefined (therefore the initial value is it's garbage, because no initialization is done)
- life time: local to the code block where it is declared (local to the function where it is declared)

## Static

- the life time of a static variable is the same as the life time of the program;
- static variable are always initialized with zero
- the scope of a static variable is local

## Extern

Use for _global variables_ to inform the compiler that the variable is declared somewhere else

### Global variables

- life time of the program
- scope global
- initialized with zero

## Register

Declares the variable in the register area of the CPU. All the other properties are equivalent to local (auto) variable.
These are used for variables that are frequently used like a counter in a for loop.
The only restriction with these variables is the fact that you are not allowed to use the & operator to get the address of the variable;
