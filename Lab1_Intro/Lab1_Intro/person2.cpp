#include "stdafx.h"
#include "person2.h"

person2::person2(){
	name = "unknown";
	address = "unknown";
}

void person2::display() {
	cout << name << "\n" << address << "\n"; // cout for std (unmanaged class)
}

void person2::setData(string n, string a) {
	name = n;
	address = a;
}

person2::~person2()
{
}
