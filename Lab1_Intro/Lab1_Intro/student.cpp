#include "stdafx.h"
#include "student.h"

student::student() {
	subjects = gcnew array< String^ >(5);
	for (int i = 0; i < subjects->Length; i++)
		subjects[i] = "blank";
}

void student::display() {
	Console::WriteLine(L"name is: {0} and address is {1}", name, address);
	for (int i = 0; i < subjects->Length; i++)
		Console::WriteLine(L"Subject: {0}", subjects[i]);
}

void student::setData(String^ n, String^ a) {
	name = n;
	address = a;
	for (int i = 0; i < subjects->Length; i++) {
		Console::WriteLine(L"Enter subject: \n");
		subjects[i] = Console::ReadLine();
	}
}

void student::setList() {
	for (int i = 0; i < subjects->Length; i++) {
		Console::WriteLine(L"Enter subject: ");
		subjects[i] = Console::ReadLine();
	}
}

