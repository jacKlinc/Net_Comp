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

```csharp
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
Develop a managed DLL in C# to add functionality to the calculator.

Just like managed C++, the run time code for managed DLLs is CIL meaning it can be integrated into 
C++/CLI easily. This code aims to add a square root function and a squared function so that when the
user clicks on the button it calls the function from the external DLL.

This DLL should work on both the C# and C++ version of the calculator. To verify further, the DLL was
given to a fellow student with a similar WinForm calculator project and the fucntions worked correctly.


## Lab5: RPC Procedure from the Calculator
Create a client/server application using Microsoft RPC

### RPC Explanation
First, an interface must be developed to set down rules for both server and client so no problems 
arise. This interface consists of an interface name, attributes, optional definitions, and the procedure 
declarations. They are written in the Microsoft Interface Definition Language (MIDL) using the .idl 
file extension. This is IDL is then compiled to give the server and client stubs which are written in
C++. To distinguish this RPC application from others online a UUID must be used.

```csharp
[
   uuid(00000001-EAF3-4A7A-A0F2-BCE4C30DA77E),
   version(1.0)						// This is version 1.0 of this interface.
]
interface Example1 
{
   void Output(
      [in, string] const char* szOutput);
}
```

The code above specifies a UUID followed by the RPC version. The interface shown indicates the inputs 
and outputs of the program, with this one taking one input in string format. After compiling the IDL 
file, a header file is made which can be inlcuded by both the client and server code. The server stub
is compiled with server/client C++ file, the RPC library is then linked to make the .exe.

### Lab5 
I attempted to make my own RPC program in VS 2017 but ran into many linker errors and couldn't solve 
them so instead used the example given by our lecturer.
