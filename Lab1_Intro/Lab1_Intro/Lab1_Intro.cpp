#include "stdafx.h"
#include "person2.h"
#include "person1.h"
#include "student.h"

int main(cli::array<System::String ^> ^args) // added cli:: before array to fix
{
	// CLR provides memory management, type safety, exception handling, garbage collection, security and thread management
	Console::WriteLine(L"Hello World"); // this is managed code, cout is not
	// Console is part of .NET, WriteLine is static so only one exists (:: instead of .)
	// L is unicode-16 rather than ASCII

	// Unmanaged Class
	person2 p2;
	p2.display();
	p2.setData("jack", "dublin");	// name = wagwan, address = hello
	p2.display();

	/* Tracking Handles:
	> Similar to C++ pointer but does not store addr
	> Addr arithmetic and casting a tracking handle is not permitted
	> All objects that are reference class types are stored in the heap; therefore, the variables
	you create to refer to such objects must be tracking handles
	> Specify handle type with: ^ with type name 
	*/
	String^myHandle; // myHandle is now a tracking handle to String object
	myHandle = gcnew String(L"Wow"); // immutable - cannot be changed
	/*
	> ref type is a CLI type that's allocated on the CLI heap 
	garbage collected when no longer required (or in scope). 
	> value type is a CLI type that's allocated on the stack, gets destroyed 
	when it goes out of scope, and essentially behaves like normal data
	*/

	// Managed Class (CLI)
	person1 p1;
	p1.display();							
	String^ someString = gcnew String(L"Ray");	// tracking handle to string
	String^ otherString = gcnew String(L"DIT");
	p1.setData(someString, otherString);		// changes name = Ray, address = DIT
	p1.display();

	// CLR Arrays & Inheritance
	student s1;
	s1.display();
	s1.setData(someString, otherString);
	s1.setList();								// called function for user input for subjects
	s1.display();								// prints all
}
