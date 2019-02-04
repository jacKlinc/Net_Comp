#pragma once
using namespace System;
ref class person1 // CLR reference class
{
public:
	person1();
	void display();
	void setData(String^ n, String^ a); // sets name and address of person, uses handle
	String^ name;
	String^ address; // tracking handle used with ^, this means variable is tracked throughout the managed heap
};

