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


#### Important Definitions:
*Endpoint:* are ports (or port groups) that the server listens for client requests. The server maintains
a database of these endpoints, this is called an endpoint map.

*Binding:* is created by the client program when the client wants to establish 
a connection to the server. All connection info is in the binding.

*Protocol Sequence:* when a client and server are communicating, a common language must be used, this 
is called a protocol sequence. In RPC's case it is a string with three components: RPC protocol (NACN), 
transport protocol (HTTP), and network protocol (IP).

#### Binding Handles

The client in RPC needs to create a binding handle which tells the run time which server 
to "bind" with, and how to do so. Below is an example.
``` csharp
// client.cpp
RPC_STATUS status;     // Platform-specific status code type
unsigned char* szStringBinding = NULL;			// Creates a string binding handle.

status = RpcStringBindingCompose(
    NULL, // UUID to bind to.
    reinterpret_cast<unsigned char*>("ncacn_ip_tcp"), // NACN & TCP/HTTP better for remote coms
    reinterpret_cast<unsigned char*>("localhost"),	// IP addr to use                                               
    reinterpret_cast<unsigned char*>("4747"),		    // Port to use.
    NULL,		// Protocol dependent network options to use.
    &szStringBinding);								   // String binding output.
    
status = RpcBindingFromStringBinding(
    szStringBinding, // The string binding to validate.
    &hExample1Binding // Put the result in the implicit binding
); 
```

#### Server Availabilty

Before the server can accept requests, it must be available on the network. 

``` csharp
// server.cpp
status = RpcServerUseProtseqEp(
    reinterpret_cast<unsigned char*>("ncacn_ip_tcp"), 
    RPC_C_PROTSEQ_MAX_REQS_DEFAULT,     // Backlog queue length for TCP/IP (default)
    reinterpret_cast<unsigned char*>("4747"), // Endpoint (port no.)
    NULL);          // Security descriptor (none)
```

The function above is passed the protocol sequence, the queue length, endpoint and security.


#### Endpoints


Endpoint maps enable the client program to identify the server's listening ports. To do this, the interface
used by both the client and program must be passed, the binding vector, optional UUID object and a comment string.

``` csharp
// server.cpp
status = RpcEpRegister(
    MyInterface_v1_0_s_ifspec,  // this is the IDL file
    rpcBindingVector,           // list of handles server can receive on
    NULL,
    NULL);
```

The client will now know where to send requests. After all steps are completed the client and server 
can communicate.



### Lab6_SOAP
This lab uses HolidayService2, a public web service, to call methods returning Holiday dates across different
countries. It can be accessed in URI format:
http://www.holidaywebservice.com/HolidayService_v2/HolidayService2.asmx

Communicating with this service is done with a proxy class, when server and client are talking it's done through this class, it serialises/deserialises the XML data that is standard among SOAP services. The class is created using the Windows Service Definiton Language (WSDL) command line tool, then the returned file was copied to this project's directory. An instance is created in Program.cs where the service's methods are accessed.

This is project is then compiled as a DLL to be accessed in future.
