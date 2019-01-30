#pragma once
using namespace System;
ref class person1 // this is a managed class
{
public:
	person1(String n, String a) : name(n), address(a) {
		name = "unknown";
		address = "unknown";
	};
	void display();
	void setData(String n, String a); // to use string class - know handling
private:
	String name, address; // strings can be used in unmanaged C++
};

