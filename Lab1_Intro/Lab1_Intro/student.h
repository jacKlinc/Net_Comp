#pragma once
#include "person1.h"
using namespace System;
ref class student: public person1
{
public:
	student();
	void display();
	void setData(String^ n, String^ a); // to use string class - know handling
	void setList();
private:
	cli::array< String^ >^ subjects; // handle to an array of handle to strings
};

