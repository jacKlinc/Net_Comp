#include "stdafx.h"
#include "student.h"

student::student() {
	subjects = gcnew array< String^ >(5);		// no. of subjects = 5
	for (int i = 0; i < subjects->Length; i++)	// iterates through array
		subjects[i] = "blank";					// default is blank
}

void student::display() {
	Console::WriteLine(L"name is: {0} and address is {1}", name, address);
	for (int i = 0; i < subjects->Length; i++)	// iterates through
		Console::WriteLine(L"Subject: {0}", subjects[i]); // prints all subjects
}

void student::setData(String^ n, String^ a) {
	name = n;
	address = a;
}

void student::setList() {
	for (int i = 0; i < subjects->Length; i++) {
		Console::WriteLine(L"Enter subject: ");	// requests user input
		subjects[i] = Console::ReadLine();		// appends array with input
	}
}

