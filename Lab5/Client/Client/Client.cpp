// Client.cpp : This file contains the 'main' function. Program execution begins and ends there.
/*
	Code is from: https://www.codeproject.com/Articles/4837/Introduction-to-RPC-Part
	Written by Anders Dalvander
	Edited by Jack
*/

#include "pch.h"
#include <iostream>
#include <iostream>
#include "Example1_h.h"
using namespace std;

int main( ) {
	RPC_STATUS status;
	RPC_CSTR szStringBinding = NULL;
	float myval, f3;
	
	// Creates a string binding handle.
	// This function is nothing more than a printf.
	// Connection is not done here.
	status = RpcStringBindingComposeA(
		NULL,						// UUID to bind to.
		(RPC_CSTR)("ncacn_ip_tcp"), // Use TCP/IP protocol.
		(RPC_CSTR)("localhost"),	// TCP/IP network address to use.
		(RPC_CSTR)("4747"),			// TCP/IP port to use.
		NULL,						// Protocol dependent network options to use.
		&szStringBinding);			// String binding output.

	if (status)
		exit(status);

	// Validates the format of the string binding handle and converts
	// it to a binding handle.
	// Connection is not done here either.
	status = RpcBindingFromStringBindingA(
		szStringBinding, // The string binding to validate.
		&hExample1Binding); // Put the result in the implicit binding
							// handle defined in the IDL file.

	if (status)
		exit(status);

	RpcTryExcept
	{
		// Calls the RPC function. The hExample1Binding binding handle
		// is used implicitly.
		// Connection is done here.
		//Output((const unsigned char *)"Hello RPC World!");
		cout << "\nenter a value: ";
		cin >> myval;									// myval-input val
		Output((const unsigned char*)"Hello!", myval, &f3);
		cout << "\nafter rpc f3 is " << f3;				// f3 is ret val
	}
		RpcExcept(1) {
		std::cerr << "Runtime reported exception " << RpcExceptionCode( )
			<< std::endl;
	}
	RpcEndExcept

		// Free the memory allocated by a string.
		status = RpcStringFreeA(
			&szStringBinding); // String to be freed.

	if (status)
		exit(status);

	// Releases binding handle resources and disconnects from the server.
	status = RpcBindingFree(
		&hExample1Binding); // Frees the implicit binding handle defined in the IDL file.

	if (status)
		exit(status);
}

// Memory allocation function for RPC.
// The runtime uses these two functions for allocating/deallocating
// enough memory to pass the string to the server.
void* __RPC_USER midl_user_allocate(size_t size) {
	return malloc(size);
}

// Memory deallocation function for RPC.
void __RPC_USER midl_user_free(void* p) {
	free(p);
}