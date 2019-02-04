#pragma once
using namespace std;
class person2						// this is an unmanaged class
{
public:
	person2();
	~person2();
	void display();					//  displays person's info
	void setData(string n, string a); // to use string class - know handling
private:
	string name;
	string address;					// strings can be used in unmanaged C++
									// how can you use std namespace in header files but System in main
};

