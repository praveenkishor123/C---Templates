# Description
1. Template is simple and yet very powerful tool in C++. 
2. The simple idea is to pass data type as a parameter so that we don’t need to write same code for different data types.
3. For example a software company may need sort() for different data types. Rather than writing and maintaining the multiple codes, we can write one sort() and pass data type as a parameter.

- C++ adds two new keywords to support templates: ‘template’ and ‘typename’. 
- The second keyword can always be replaced by keyword ‘class’.

## Function Templates: 
- We write a generic function that can be used for different data types. 
- Examples of function templates are sort(), max(), min(), printArray()

## Class Templates: 
- Like function templates, class templates are useful when a class defines something that is independent of data type. 
- Can be useful for classes like LinkedList, BinaryTre, Stack, Queue, Array, etc.

## Can there be more than one arguments to templates?
Yes, like normal parameters, we can pass more than one data types as arguments to templates.

## Can we specify default value for template arguments?
Yes, like normal parameters, we can specify default arguments to templates. The following example demonstrates the same.

## What is the difference between function overloading and templates?
Both function overloading and templates are examples of polymorphism feature of OOP. 
Function overloading is used when multiple functions do similar operations, templates are used when multiple functions do identical operations.

## How templates work?
- Templates are expended at compiler time. 
- This is like macros. The difference is, compiler does type checking before template expansion. The idea is simple, source code contains only function/class, but compiled code may contain multiple copies of same function/class.

## What happens when there is static member in a template class/function?
Each instance of a template contains its own static variable.

## What is template specialization?
Template specialization allows us to have different code for a particular data type.
