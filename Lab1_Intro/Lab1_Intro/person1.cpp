#include "stdafx.h"
#include "person1.h"

person1::person1() {
	name = gcnew String(L"unknown");
	address = "unknown";
}

void person1::display() {
	Console::WriteLine(L"name is: {0} and address is {1}", name, address);
}

void person1::setData(String^ n, String^ a) {
	name = n;
	address = a;
}
