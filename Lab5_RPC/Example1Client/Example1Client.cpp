// File Example1Client.cpp
#include <iostream>
#include "../Example1/Example1.h"

int main()
{
   RPC_STATUS status;									// Platform-specific status code type
   unsigned char* szStringBinding = NULL;				// Creates a string binding handle.

   status = RpcStringBindingCompose(
      NULL, // UUID to bind to.
      reinterpret_cast<unsigned char*>("ncacn_ip_tcp"), // Transport protocol to use                                                         
      reinterpret_cast<unsigned char*>("localhost"),	// IP addr to use                                               
      reinterpret_cast<unsigned char*>("4747"),			// Port to use.
      NULL,												// Protocol dependent network options to use.
      &szStringBinding);								// String binding output.

   if (status)			// Validates format of string binding handle and converts to binding handle.
      exit(status);

   status = RpcBindingFromStringBinding(
      szStringBinding, // The string binding to validate.
      &hExample1Binding // Put the result in the implicit binding
   ); 

   if (status)
      exit(status);

   RpcTryExcept {
      Output("Hello Implicit RPC World!"); // Calls the Output function made in the IDL
   }
   RpcExcept(1) {
      cerr << "Runtime reported exception " << RpcExceptionCode() << endl;
   }
   RpcEndExcept

   status = RpcStringFree(			// Free the memory allocated by a string.
      &szStringBinding
   ); 

   if (status)
      exit(status);

   status = RpcBindingFree(
      &hExample1Binding
   ); // Frees implicit binding handle defined in IDL.

   if (status)
      exit(status);
}

// Memory allocation function for RPC.
// The runtime uses these two functions for allocating/deallocating
// enough memory to pass the string to the server.
void* __RPC_USER midl_user_allocate(size_t size)
{
    return malloc(size);
}

// Memory deallocation function for RPC.
void __RPC_USER midl_user_free(void* p)
{
    free(p);
}
