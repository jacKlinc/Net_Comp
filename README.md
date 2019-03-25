# Network Centric Computing
*All work completed in Network Centric Computing Module.*


## Lab1: Intro to C++/CLI 
  This lab is an introduction into to the Common Language Runtime (CLR). 
  After compiling the C++/CLI code it is sent to the Common Intermediate Language (CIL), which allows
  .NET compatible languages such as J# and C# to compile in the same environment. 
  
  CLR automatically manages dynamic memory, meaning the use of the new and delete 
  operators is not needed. 
  
  C++ code that is executed outside the CLR requires its own memory management and that is done with 
  gcnew (Garbage Collection), CLR automatically deletes memory from its own managed heap which is 
  independent of the C++ native heap; because of this, you cannot use normal C++ pointers so tracking
  handles must be used instead, using the carat symbol ^ (same as reference in C++).
  
  ```cpp 
  String^ someString = gcnew String(L"Hello");
  ```
  
  Tracking handles are similar to pointers but the address is tracked on the heap and changes depending
  on location but this means address arithmetic is not possible.
  
  
## Lab2: Windows Form Calculator (C++)
  This lab makes a basic calculator in the .NET environment.
  
  Our lecturer gave the algorithm for the calculator and from there the GUI was built in the forms 
  window using the Toolbox in VS. The design was to add a textbox where the numbers would be shown 
  along with a keypad 0-9 and basic operators.
  
  To edit the response of each button, the GUI element was selected and the C++ file was edited.
  
  
## Lab3: Windows Form Calculator (C#)
  Identical to previous lab but built in C#.
  
  Only difference is the syntax and the removal of the tracking handle as it is done automatically in
  C#.
  

## Lab4: DLL for C# Calculator
  
