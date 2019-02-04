#include "stdafx.h"
#include "person1.h"

person1::person1() {
	name = gcnew String(L"unknown"); // L makes it 16-bit rather than 8-bit ASCII
	address = gcnew String(L"unknown"); // gcnew-garbage collection: makes string and deletes when finished
}

void person1::display() {
	Console::WriteLine(L"name is: {0} and address is {1}", name, address); // prints name and address
	// Console is part of the System namespace
}

void person1::setData(String^ n, String^ a) { // just like the unmanaged class but is passed tracking handle
	name = n;
	address = a;
}
