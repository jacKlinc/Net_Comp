#pragma once
#include "person1.h"
using namespace System;					// to use tracking handle/array
ref class student: public person1		// inherits public portion of person1 class
{
public:
	student();
	void display();
	void setData(String^ n, String^ a); // to use string class - know handling
	void setList();						// changes the subject list
private:
	cli::array< String^ >^ subjects;	// handle to an array of handle to strings called subjects
};

