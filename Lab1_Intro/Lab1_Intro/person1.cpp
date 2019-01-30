#include "stdafx.h"
#include "person1.h"

/*person1::person1() {
	//name = "unknown";
	//address = "unknown";
}*/

void person1::display() {
	cout << name << "\n" << address << "\n";
}

void person1::setData(String n, String a) {
	name = n;
	address = a;
}
