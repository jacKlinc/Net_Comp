#pragma once
using namespace System;
ref class person1 // CLR reference class
{
public:
	person1();
	void display();
	void setData(String^ n, String^ a); // to use string class - know handling
	String^ name;
	String^ address; // strings can be used in unmanaged C++
};

